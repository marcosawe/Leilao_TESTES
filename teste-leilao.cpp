#include "catch.hpp"
#include "Leilao.hpp"
#include "Usuario.hpp"

TEST_CASE("Leilão não deve receber lances consecutivos do mesmo usuário") {
    // Arrange
    Leilao leilao("Fiat 147 0Km");
    Usuario marcos("Marcos Eduardo Fernandes");
    
    Lance primeiroLance(marcos, 14300);
    Lance segundoLance(marcos, 1556);
    
    // Act
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);
    
    // Assert
    REQUIRE(1 == leilao.recuperaLances().size());
    REQUIRE(1000 == leilao.recuperaLances()[0].recuperaValor());
}
