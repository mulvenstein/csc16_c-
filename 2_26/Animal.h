typedef int fixed;
const fixed maxNameSize = 30;

class Animal {
   public :
      void setName(const char name[]);
      void setSpecies(const char species[]);
      void displayContent();
      void read();
      //data
      char m_species[maxNameSize];
      char m_name[maxNameSize];
   private :
   protected :
};
