#include <iostream>
#include <string>



std::string getCompliment(std::string dna)
{
    std::string compliment = "";
    for(int i = 0; i < dna.length(); i++)
    {
        switch(dna[i])
        {
          case 'a':
            compliment += 't';
            break;
            
        case 't':
            compliment += 'a';
            break;
            
        case 'g':
            compliment += 'c';
            break;
            
        case 'c':
            compliment += 'g';
            break;
        }
    }
    return compliment;
}

std::string getRNA(std::string dna)
{
    std::string rna = "";
    for(int i = 0; i < dna.length(); i++)
    {
        switch(dna[i])
        {
          case 'a':
            rna += 'a';
            break;
            
        case 't':
            rna += 'u';
            break;
            
        case 'g':
            rna += 'g';
            break;
            
        case 'c':
            rna += 'c';
            break;
        }
    }
    return rna;
}

std::string getmRNA(std::string rna)
{
    return "5-cap " + rna + " aaaaaaaaaaaaaaaaaaaaaa";
}

std::string getAminoAcids(std::string dna)//which is mRNA :P
{
    std::string acid = "";
    for(int i = 0; i < dna.length(); i += 3)
    {
        switch(dna[i])
        {
            case 'a':
            switch(dna[i+1])
            {
                case 'a':
                switch(dna[i+2])
                {
                    case 'a':
                    acid += "Lys";
                    break;
                    
                    case 'u':
                    acid += "Asn";
                    break;
                    
                    case 'g':
                    acid += "Lys";
                    break;
                    
                    case 'c':
                    acid += "Asn";
                    break;
                }
                acid += '-';
                break;
                
                case 'u':
                switch(dna[i+2])
                {
                    case 'a':
                    acid += "Ile";
                    break;
                    
                    case 'u':
                    acid += "Ile";
                    break;
                    
                    case 'g':
                    acid += "Met";
                    break;
                    
                    case 'c':
                    acid += "Ile";
                    break;
                }
                acid += '-';
                break;
                
                case 'g':
                switch(dna[i+2])
                {
                    case 'a':
                    acid += "Arg";
                    break;
                    
                    case 'u':
                    acid += "Ser";
                    break;
                    
                    case 'g':
                    acid += "Arg";
                    break;
                    
                    case 'c':
                    acid += "Ser";
                    break;
                }
                acid += '-';
                break;
                
                case 'c':
                switch(dna[i+2])
                {
                    case 'a':
                    case 'u':
                    case 'g':
                    case 'c':
                    acid += "Thr";
                    break;
                }
                acid += '-';
                break;
            }
            break;
            
            case 'u':
            switch(dna[i+1])
            {
                case 'a':
                switch(dna[i+2])
                {   
                    case 'a':
                    acid += "STOP";
                    break;
                    
                    case 'u':
                    acid += "Tyr";
                    break;
                    
                    case 'g':
                    acid += "STOP";
                    break;
                    
                    case 'c':
                    acid += "Tyr";
                    break;
                }
                acid += '-';
                break;
                
                case 'u':
                switch(dna[i+2])
                {
                    case 'a':
                    acid += "Leu";
                       break;

                    case 'u':
                    acid += "Phe";
                    break;
                    
                    case 'g':
                    acid += "Leu";
                    break;
                    
                    case 'c':
                    acid += "Phe";
                    break;
                }
                acid += '-';
                    break;
                
                case 'g':
                switch(dna[i+2])
                {
                    case 'a':
                    acid += "STOP";
                    break;
                    
                    case 'u':
                    acid += "Cys";
                    break;
                    
                    case 'g':
                    acid += "Trp";
                    break;
                    
                    case 'c':
                    acid += "Cys";
                    break;
                }
                acid += '-';
                break;
                
                case 'c':
                switch(dna[i+2])
                {
                    case 'a':
                    case 'u':
                    case 'g':
                    case 'c':
                    acid += "Ser";
                    break;
                }
                acid += '-';
                break;
            }
            break;
            
            case 'g':
            switch(dna[i+1])
            {
                case 'a':
                switch(dna[i+2])
                {
                    case 'a':
                    acid += "Glu";
                    break;
                    
                    case 'u':
                    acid += "Asp";
                    break;
                    
                    case 'g':
                    acid += "Glu";
                    break;
                    
                    case 'c':
                    acid += "Asp";
                    break;
                }
                acid += '-';
                break;
                
                case 'u':
                switch(dna[i+2])
                {
                    case 'a':
                    case 'u':
                    case 'g':
                    case 'c':
                    acid += "val";
                    break;
                }   
                acid += '-';
                break;
                
                case 'g':
                switch(dna[i+2])
                {
                    case 'a':
                    case 'u':
                    case 'g':
                    case 'c':
                    acid += "Gly";
                    break;
                }
                acid += '-';
                break;
                
                case 'c':
                switch(dna[i+2])
                {
                    case 'a':
                    case 'u':
                    case 'g':
                    case 'c':
                    acid += "Ala";
                    break;
                }
                acid += '-';
                break;
            }
            break;
            
            case 'c':        
            switch(dna[i+1])
            {
                case 'a':
                switch(dna[i+2])
                {
                    case 'a':
                    acid += "Gln";
                    break;
                    
                    case 'u':
                    acid += "His";
                    break;
                    
                    case 'g':
                    acid += "Gln";
                    break;
                    
                    case 'c':
                    acid += "His";
                    break;
                }
                acid += '-';
                break;
                
                case 'u':
                switch(dna[i+2])
                {
                    case 'a':                    
                    case 'u':
                    case 'g':
                    case 'c':
                    acid += "Leu";
                    break;
                }
                acid += '-';
                break;
                
                case 'g':
                switch(dna[i+2])
                {
                    case 'a':
                    case 'u':
                    case 'g':
                    case 'c':
                    acid += "Arg";
                    break;
                }
                acid += '-';
                break;
                
                case 'c':
                switch(dna[i+2])
                {
                    case 'a':
                    case 'u':
                    case 'g':
                    case 'c':
                    acid += "Pro";
                    break;
                }
                acid += '-';
                break;
            }
            break;
        }
    }
    return acid;
}

int main()
{
    std::string dna = "ggtttcagacaaaatcaaaaagaaggaaggtgctcacattccttaaattaagga";
    std::string compliment = getCompliment(dna);
    std::string rna = getRNA(dna);
    std::string mrna = getmRNA(rna);
    std::string acids = getAminoAcids(rna);

    std::cout << "DNA\n" << dna << "\n" << compliment << std::endl;
    std::cout << "\nRNA\n" << rna << std::endl;
    std::cout << "\nmRNA\n" << mrna << std::endl;
    std::cout << "\nacids\n" << acids << std::endl;
    
    return 0;
}