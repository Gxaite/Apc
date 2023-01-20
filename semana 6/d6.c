double calculaVelocidadeMedia(int tA, int tB, double distancia)
{
    double tempoHora =(tB-tA)/3600.0;
    double velocidadeMedia = distancia/tempoHora;
    return velocidadeMedia;
}


int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima)
{
    double resultado = calculaVelocidadeMedia(tA,tB,distancia);

    if (resultado>velocidadeMaxima)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}
