__int64 __fastcall sub_330C50(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rax
  const char *v6; // rcx
  _QWORD *module_data; // rax

  v3 = a1;
  if ( !a3 )
  {
    a1 = (__int64 *)(unsigned int)dword_4C2AB8;
    module_data = (_QWORD *)get_module_data();
    a2 = (unsigned int)a2;
LABEL_11:
    v4 = module_data[51];
    v6 = s1;
    if ( module_data[54] )
      v6 = (const char *)module_data[53];
    goto LABEL_5;
  }
  v4 = a3[61];
  v5 = a3[63];
  if ( v4 != -1 )
  {
    v6 = s1;
    if ( v5 )
      v6 = (const char *)a3[62];
    goto LABEL_5;
  }
  v4 = a3[5];
  v6 = s1;
  if ( v5 )
    v6 = (const char *)a3[62];
  if ( v4 == -1 )
  {
    module_data = (_QWORD *)a3[187];
    goto LABEL_11;
  }
LABEL_5:
  if ( (unsigned int)(1 - a2) > 0x24 )
    sub_323060(a1, a2, a3, v6);
  sub_66DF0(v3);
  return v4;
}

