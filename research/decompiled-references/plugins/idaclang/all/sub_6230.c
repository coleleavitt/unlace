unsigned __int64 __fastcall sub_6230(__int64 a1)
{
  _QWORD v2[61]; // [rsp+0h] [rbp-1F8h] BYREF
  unsigned __int64 v3; // [rsp+1E8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  memset(v2, 0, 0x1E0u);
  v2[5] = "CLANG_PARSE_STATIC_DECLS";
  v2[10] = "CLANG_LOG_WARNINGS";
  v2[15] = "CLANG_LOG_AST";
  v2[20] = "CLANG_LOG_MACROS";
  v2[25] = "CLANG_LOG_PREDEFINED";
  v2[30] = "CLANG_LOG_UDTS";
  LODWORD(v2[2]) = 262147;
  LODWORD(v2[3]) = 1;
  v2[6] = 32;
  LODWORD(v2[7]) = 262147;
  LODWORD(v2[8]) = 2;
  v2[11] = 36;
  LODWORD(v2[12]) = 262147;
  LODWORD(v2[13]) = 1;
  v2[16] = 36;
  LODWORD(v2[17]) = 262147;
  LODWORD(v2[18]) = 2;
  v2[21] = 36;
  LODWORD(v2[22]) = 262147;
  LODWORD(v2[23]) = 4;
  v2[26] = 36;
  LODWORD(v2[27]) = 262147;
  LODWORD(v2[28]) = 8;
  v2[31] = 36;
  LODWORD(v2[32]) = 262147;
  LODWORD(v2[33]) = 16;
  v2[35] = "CLANG_LOG_FILES";
  v2[40] = "CLANG_LOG_ARGV";
  v2[45] = "CLANG_LOG_TARGET_INFO";
  v2[50] = "CLANG_ARGV";
  v2[36] = 36;
  LODWORD(v2[37]) = 262147;
  LODWORD(v2[38]) = 32;
  v2[41] = 36;
  LODWORD(v2[42]) = 262147;
  LODWORD(v2[43]) = 64;
  v2[46] = 36;
  LODWORD(v2[47]) = 262147;
  LODWORD(v2[48]) = 128;
  v2[51] = 8;
  LODWORD(v2[52]) = 50593793;
  v2[55] = "CLANG_SMART_POINTERS";
  v2[56] = 40;
  LODWORD(v2[57]) = 50593793;
  read_config2("idaclang", 1, v2, 12, 0, 0, 0, a1, "CLANG_APPLY_TINFO", 32, v2[2], v2[3]);
  return v3 - __readfsqword(0x28u);
}
