bool __fastcall sub_27C0(__int64 a1, const __m128i *a2)
{
  const char *v2; // r13
  int v3; // ebx
  __m128i vars0; // [rsp+0h] [rbp+0h]
  char *vars10; // [rsp+10h] [rbp+10h]
  __int64 vars20; // [rsp+20h] [rbp+20h]
  __int16 vars28; // [rsp+28h] [rbp+28h]
  char vars2A; // [rsp+2Ah] [rbp+2Ah]
  __int16 vars48; // [rsp+48h] [rbp+48h]
  unsigned __int16 vars78; // [rsp+78h] [rbp+78h]
  unsigned __int16 vars7A; // [rsp+7Ah] [rbp+7Ah]
  char vars130; // [rsp+130h] [rbp+130h] BYREF
  unsigned __int64 vars1138; // [rsp+1138h] [rbp+1138h]

  vars1138 = __readfsqword(0x28u);
  netnode_check();
  netnode_valobj();
  if ( (vars7A | (vars78 << 16)) <= 0x60000u )
  {
    v2 = "win";
    if ( vars48 == 523 )
      v2 = "win/64";
  }
  else
  {
    v2 = "win7";
    if ( vars48 == 523 )
      v2 = "win7/64";
  }
  get_idp_name();
  vars2A = 0;
  vars28 = 256;
  vars20 = 0;
  vars10 = &vars130;
  vars0 = _mm_unpacklo_epi64(_mm_loadl_epi64(a2), (__m128i)(unsigned __int64)v2);
  v3 = idt_open();
  qfree();
  return v3 == 0;
}

