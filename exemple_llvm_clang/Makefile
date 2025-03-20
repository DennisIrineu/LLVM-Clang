CC = clang


CFLAGS = -fprofile-instr-generate -fcoverage-mapping -I src

SRC_DIR = src


SRCS = $(wildcard $(SRC_DIR)/*.c)


TARGET = exemple_llvm_clang


PROFDATA = default.profdata

all: $(TARGET)


$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)


coverage: $(TARGET)
	LLVM_PROFILE_FILE="$(TARGET).profraw" ./$(TARGET)
	llvm-profdata merge -sparse "$(TARGET).profraw" -o "$(PROFDATA)"
	llvm-cov show ./$(TARGET) -instr-profile="$(PROFDATA)"


coverage-html: $(TARGET)
	LLVM_PROFILE_FILE="$(TARGET).profraw" ./$(TARGET)
	llvm-profdata merge -sparse "$(TARGET).profraw" -o "$(PROFDATA)"
	llvm-cov report ./$(TARGET) -instr-profile="$(PROFDATA)" > coverage_report.txt
	echo "<html><head><title>Relatório de Cobertura</title></head><body><pre>" > coverage_report.html
	cat coverage_report.txt >> coverage_report.html
	echo "</pre></body></html>" >> coverage_report.html


clean:
	rm -f $(TARGET) *.profraw *.profdata coverage_report.html coverage_report.txt


help:
	@echo "Opções disponíveis:"
	@echo "  make all          - Compila o projeto."
	@echo "  make coverage     - Executa o programa e gera o relatório de cobertura no terminal."
	@echo "  make coverage-html - Executa o programa e gera o relatório de cobertura em HTML."
	@echo "  make clean        - Remove os arquivos gerados (executável, arquivos de cobertura e relatório HTML)."
	@echo "  make help         - Exibe esta mensagem de ajuda."

.PHONY: all coverage coverage-html clean help




