//==============================================================================
//      File:           $URL$
//      Version:        Automatically generated by 'System Verilog to VPI' script
//      Author:         Script By Tom Golubev
//      Copyright:      Copyright 2005-2009 UC Santa Cruz
//==============================================================================

//==============================================================================
//     Section:        License
//==============================================================================
//      Copyright (c) 2005-2009, Regents of the University ofCalifornia
//      All rights reserved.
//
//      Redistribution and use in source and binary forms, with or without modification,
//      are permitted provided thatthefollowing conditions are met:
//
//              - Redistributions of source code must retain the above copyright notice,
//                      this list ofconditions and the following disclaimer.
//              - Redistributions in binary form must reproduce the above copyright
//                      notice, this list ofconditions and the following disclaimer
//                      in the documentation and/or other materials provided with the
//                      distribution.
//             - Neither the name of the University of California, Santa Cruz nor the
//                      names of its contributors may be used to endorse or promote
//                     products derived from this software without specific prior
//                      written permission.
//
//      THIS SOFTWARE IS PROVIDED BY THE COPYRIGHTHOLDERSAND CONTRIBUTORS "AS IS" AND
//      ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//      WARRANTIES OF MERCHANTABILITY ANDFITNESS FOR A PARTICULAR PURPOSE ARE
//      DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
//      ANY DIRECT, INDIRECT, INCIDENTAL,SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//      (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//      LOSS OF USE, DATA, ORPROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
//      ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//      (INCLUDING NEGLIGENCE OROTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//      SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//==============================================================================



#ifndef ALU_TYPES_tb
#define ALU_TYPES_tb

  	//	Class definition for ResultType which is 32 bits

class ResultType: public SharedAllClass {   
  private:
   
  public:   
      ResultType(vpiHandle *h=0, SharedAllClass *obj = 0, char *name="default", uint32_t bits=32){
				ttb_name    = name;   
				num_bits    = bits;
				handle      = h;   

        if (bits > 64){ 
          bit_array = new char[bits];
          for (uint32_t i = 0; i < num_bits; i++) 
            bit_array[i] = '0';
        }else{
          bit_array = 0;
        }

				if(obj)   
					top_obj = obj;   
				else   
					top_obj = this;   

			  if (TB_FN_DEBUG) vpi_printf("@D ResultType Constructor, name=%s\n", ttb_name);   
   
      }// /ResultType constructor   

     ResultType &operator =(const uint64_t in) {     
        if (num_bits > 64) {
          ERROR("= operator to a larger than 64 bits wire (%d bits)\n",num_bits); 
        }

				// To provide a true representation, modulus so that an 8 bit value cannot exceed true size     
				value = in; 
				top_obj->written_to = true;   
  			if (TB_FN_DEBUG) vpi_printf("@D ResultType &operator =, name=%s, top_obj->written_to[%d], value=%u (unsinged)\n", ttb_name, written_to, in); 
				top_obj->write_a();       

        return *this;
     }
                
 };// /ResultType Class 



  	//	Class definition for ALUopType which is 4 bits

class ALUopType: public SharedAllClass {   
  private:
   
  public:   
      ALUopType(vpiHandle *h=0, SharedAllClass *obj = 0, char *name="default", uint32_t bits=4){
				ttb_name    = name;   
				num_bits    = bits;
				handle      = h;   

        if (bits > 64){ 
          bit_array = new char[bits];
          for (uint32_t i = 0; i < num_bits; i++) 
            bit_array[i] = '0';
        }else{
          bit_array = 0;
        }

				if(obj)   
					top_obj = obj;   
				else   
					top_obj = this;   

			  if (TB_FN_DEBUG) vpi_printf("@D ALUopType Constructor, name=%s\n", ttb_name);   
   
      }// /ALUopType constructor   

     ALUopType &operator =(const uint64_t in) {     
        if (num_bits > 64) {
          ERROR("= operator to a larger than 64 bits wire (%d bits)\n",num_bits); 
        }

				// To provide a true representation, modulus so that an 8 bit value cannot exceed true size     
				value = in; 
				top_obj->written_to = true;   
  			if (TB_FN_DEBUG) vpi_printf("@D ALUopType &operator =, name=%s, top_obj->written_to[%d], value=%u (unsinged)\n", ttb_name, written_to, in); 
				top_obj->write_a();       

        return *this;
     }
                
 };// /ALUopType Class 



  	//	Class definition for shamtType which is 5 bits

class shamtType: public SharedAllClass {   
  private:
   
  public:   
      shamtType(vpiHandle *h=0, SharedAllClass *obj = 0, char *name="default", uint32_t bits=5){
				ttb_name    = name;   
				num_bits    = bits;
				handle      = h;   

        if (bits > 64){ 
          bit_array = new char[bits];
          for (uint32_t i = 0; i < num_bits; i++) 
            bit_array[i] = '0';
        }else{
          bit_array = 0;
        }

				if(obj)   
					top_obj = obj;   
				else   
					top_obj = this;   

			  if (TB_FN_DEBUG) vpi_printf("@D shamtType Constructor, name=%s\n", ttb_name);   
   
      }// /shamtType constructor   

     shamtType &operator =(const uint64_t in) {     
        if (num_bits > 64) {
          ERROR("= operator to a larger than 64 bits wire (%d bits)\n",num_bits); 
        }

				// To provide a true representation, modulus so that an 8 bit value cannot exceed true size     
				value = in; 
				top_obj->written_to = true;   
  			if (TB_FN_DEBUG) vpi_printf("@D shamtType &operator =, name=%s, top_obj->written_to[%d], value=%u (unsinged)\n", ttb_name, written_to, in); 
				top_obj->write_a();       

        return *this;
     }
                
 };// /shamtType Class 



  	//	Class definition for data1Type which is 32 bits

class data1Type: public SharedAllClass {   
  private:
   
  public:   
      data1Type(vpiHandle *h=0, SharedAllClass *obj = 0, char *name="default", uint32_t bits=32){
				ttb_name    = name;   
				num_bits    = bits;
				handle      = h;   

        if (bits > 64){ 
          bit_array = new char[bits];
          for (uint32_t i = 0; i < num_bits; i++) 
            bit_array[i] = '0';
        }else{
          bit_array = 0;
        }

				if(obj)   
					top_obj = obj;   
				else   
					top_obj = this;   

			  if (TB_FN_DEBUG) vpi_printf("@D data1Type Constructor, name=%s\n", ttb_name);   
   
      }// /data1Type constructor   

     data1Type &operator =(const uint64_t in) {     
        if (num_bits > 64) {
          ERROR("= operator to a larger than 64 bits wire (%d bits)\n",num_bits); 
        }

				// To provide a true representation, modulus so that an 8 bit value cannot exceed true size     
				value = in; 
				top_obj->written_to = true;   
  			if (TB_FN_DEBUG) vpi_printf("@D data1Type &operator =, name=%s, top_obj->written_to[%d], value=%u (unsinged)\n", ttb_name, written_to, in); 
				top_obj->write_a();       

        return *this;
     }
                
 };// /data1Type Class 



  	//	Class definition for data2Type which is 32 bits

class data2Type: public SharedAllClass {   
  private:
   
  public:   
      data2Type(vpiHandle *h=0, SharedAllClass *obj = 0, char *name="default", uint32_t bits=32){
				ttb_name    = name;   
				num_bits    = bits;
				handle      = h;   

        if (bits > 64){ 
          bit_array = new char[bits];
          for (uint32_t i = 0; i < num_bits; i++) 
            bit_array[i] = '0';
        }else{
          bit_array = 0;
        }

				if(obj)   
					top_obj = obj;   
				else   
					top_obj = this;   

			  if (TB_FN_DEBUG) vpi_printf("@D data2Type Constructor, name=%s\n", ttb_name);   
   
      }// /data2Type constructor   

     data2Type &operator =(const uint64_t in) {     
        if (num_bits > 64) {
          ERROR("= operator to a larger than 64 bits wire (%d bits)\n",num_bits); 
        }

				// To provide a true representation, modulus so that an 8 bit value cannot exceed true size     
				value = in; 
				top_obj->written_to = true;   
  			if (TB_FN_DEBUG) vpi_printf("@D data2Type &operator =, name=%s, top_obj->written_to[%d], value=%u (unsinged)\n", ttb_name, written_to, in); 
				top_obj->write_a();       

        return *this;
     }
                
 };// /data2Type Class 




class AluInstType : public SharedAllClass{

  public: 
	AluInstType(vpiHandle *h=0, SharedAllClass *obj = 0, char *name="default", uint32_t bits=73)
		:alu_op(0, obj?obj:this, "alu_op", 4)
		,shamt(0, obj?obj:this, "shamt", 5)
		,data1(0, obj?obj:this, "data1", 32)
		,data2(0, obj?obj:this, "data2", 32)
	{
	 ttb_name =name;            
	 handle = h;
	 num_bits = bits;
	 if (bits > 64){ 
	   bit_array = new char[bits];
	   for (uint32_t i = 0; i < num_bits; i++) 
	      bit_array[i] = '0';
	   }else{
	      bit_array = 0;
	 }
	
	 if(obj)
	   top_obj = obj;
	 else  
	   top_obj = this; 
	}// /Constructor

 
	 GenType                   alu_op; 	// 4 bits
	 GenType                   shamt; 	// 5 bits
	 GenType                   data1; 	// 32 bits
	 GenType                   data2; 	// 32 bits

  public:

	const char *ttb_read(const char *str) {

		str = alu_op.ttb_read(str);

		str = shamt.ttb_read(str);

		str = data1.ttb_read(str);

		str = data2.ttb_read(str);
		return str;
	}// /read fn


	char *ttb_write(char *str) {

		str = alu_op.ttb_write(str);

		str = shamt.ttb_write(str);

		str = data1.ttb_write(str);

		str = data2.ttb_write(str);
		return str;
	}// /write fn

 }; //AluInstType; 	 73 bits total 





//   Automatically Generated by struct.rb


#endif
