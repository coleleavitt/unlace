unsigned __int64 __fastcall sub_A940(const char *src, unsigned __int16 a2, char a3)
{
  size_t v3; // rax
  size_t v4; // rbp
  size_t v6; // r13
  _BYTE *v7; // rbx
  void *v8; // [rsp+0h] [rbp-78h] BYREF
  __int128 v9; // [rsp+8h] [rbp-70h]
  __int64 v10; // [rsp+18h] [rbp-60h]
  __int64 v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h]
  __int16 v14; // [rsp+38h] [rbp-40h]
  char v15; // [rsp+3Ah] [rbp-3Eh]
  unsigned __int64 v16; // [rsp+48h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v15 = a3;
  v8 = nullptr;
  v10 = 0x100000001LL;
  v12 = a2;
  v11 = 0;
  v13 = 0;
  v14 = 0;
  v9 = 0;
  if ( src )
  {
    v3 = strlen(src);
    v4 = v3;
    if ( v3 )
    {
      v6 = v3 + 1;
      v8 = (void *)qvector_reserve(&v8, 0, v3 + 1, 1);
      *(_QWORD *)&v9 = v6;
      memmove(v8, src, v4);
      *((_BYTE *)v8 + v4) = 0;
      if ( (unsigned __int64)v9 > 1 )
      {
        v7 = v8;
        if ( dummy_name_ea(v8) != -1 )
          *v7 = toupper((unsigned __int8)*v7);
      }
    }
  }
  sub_A750(&qword_14500, (__int64)&v8);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v16 - __readfsqword(0x28u);
}
