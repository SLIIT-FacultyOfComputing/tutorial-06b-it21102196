class Box {
    private:
       int length;
       int width;
       int height;
       
    public:
        void setWidth(int w);
        void setLength(int l);
        void setHeight(int h);

        int getWidth();
        int getLength();
        int getHeight();
       // write prototypes of setters for length, width and height
       // write prototypes of getters for length, width and height
 
       int calcVolume();
};
