__int64 *__fastcall sub_E6E60(__int64 *a1, int a2, int a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  char v8; // r12
  char v10; // r13
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // r9
  char v15; // dl
  __int64 v17; // rdi
  char v20; // [rsp+14h] [rbp-44h]
  char v21; // [rsp+18h] [rbp-40h]

  v8 = a3;
  if ( a2 )
  {
    v10 = a2;
    v11 = 0;
  }
  else
  {
    v11 = 1;
    v10 = 89;
  }
  if ( a3 == 85 && a5 == 88 || a3 == 86 && (a5 == 85 || a5 == 88) )
  {
    sub_DBD10((__int64)a1, "unsupported frame specification", a7, v11);
    v14 = a6;
  }
  else
  {
    v21 = a5;
    v20 = v11;
    v12 = sub_DC1C0(*a1, 0x90u);
    v13 = v12;
    v14 = a6;
    if ( v12 )
    {
      *((_BYTE *)v12 + 32) = v10;
      *((_BYTE *)v12 + 33) = v8;
      v15 = a7;
      *((_BYTE *)v12 + 34) = v21;
      if ( !(_BYTE)a7 && (*(_BYTE *)(*a1 + 96) & 2) != 0 )
        v15 = 66;
      *((_BYTE *)v12 + 36) = v15;
      *((_BYTE *)v12 + 35) = v20;
      v12[6] = (__int64)sub_DEF60((__int64)a1, a6);
      v13[5] = (__int64)sub_DEF60((__int64)a1, a4);
      return v13;
    }
  }
  v17 = *a1;
  if ( v14 )
  {
    sub_D7720(v17, v14);
    v17 = *a1;
  }
  v13 = nullptr;
  if ( a4 )
    sub_D7720(v17, a4);
  return v13;
}
