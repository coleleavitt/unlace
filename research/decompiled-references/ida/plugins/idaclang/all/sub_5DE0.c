__int64 sub_5DE0()
{
  __int64 module_data; // rbx
  int v1; // edx
  __int64 result; // rax
  __m128i v3; // xmm0
  unsigned int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_29364);
  LOWORD(v4) = *(_DWORD *)(module_data + 176);
  HIWORD(v4) = *(_DWORD *)(module_data + 180);
  v1 = sub_5D10(
         (__int64)"IDAClang Plugin Options\n"
                  "%/Parser options:\n"
                  "<#Automatically apply type info to any mangled names found in the idb#~A~pply tinfo to mangled names:C"
                  ">\n"
                  "<#Parse declarations with internal linkage#Parse ~s~tatic decls:C>>\n"
                  "Logging options:\n"
                  "<#Print compiler warnings reported by clang#Print compiler warnings:C>\n"
                  "<#Print the elements in clang's abstract syntax tree#Print AST nodes:C>\n"
                  "<#Print all macro definitions found in the input source#Print macro definitions:C>\n"
                  "<#Print all macros defined internally by clang#Print predefined macros:C>\n"
                  "<#Print a warning if a UDT type created by IDA does not match the type in clang's AST#Print UDT warnin"
                  "gs:C>\n"
                  "<#Print the path to every file that was included the translation unit#Print file paths:C>\n"
                  "<#Print the fully resolved command line that will be passed to libclang#Print clang argv:C>\n"
                  "<#Print information about the target platform#Print target info:C>>\n"
                  "<#Semicolon-separated list of smart pointer template names. Instances of such templates will be reduce"
                  "d to simple pointers.#Smart ~p~ointers:q::30::>",
         0,
         &v4,
         (char *)&v4 + 2,
         module_data + 184);
  result = 0;
  if ( v1 )
  {
    v3 = _mm_cvtsi32_si128(v4);
    *(_QWORD *)(module_data + 176) = _mm_unpacklo_epi16(v3, _mm_cmpgt_epi16((__m128i)0LL, v3)).m128i_u64[0];
    return 1;
  }
  return result;
}

