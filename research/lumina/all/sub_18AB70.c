__int64 __fastcall sub_18AB70(__int64 a1, unsigned __int64 a2, char **a3, char a4)
{
  __int64 v6; // rax
  void *v7; // rbp
  unsigned int v8; // ebx
  int v10; // [rsp+Ch] [rbp-4Ch] BYREF
  const char *v11[9]; // [rsp+10h] [rbp-48h] BYREF

  v11[1] = (const char *)__readfsqword(0x28u);
  v6 = sub_185130(off_23CF40, 3u, 0, 0);
  v7 = (void *)v6;
  if ( a4 )
  {
    v8 = sub_185290(v6);
    if ( v8 )
      goto LABEL_3;
  }
  else
  {
    v8 = sub_185590(v6, a2, 0);
    if ( v8 )
    {
LABEL_3:
      if ( !a3 )
        goto LABEL_4;
LABEL_8:
      sub_17D700((__int64)v7, &v10, v11, 0);
      sub_2C700(v8);
      sub_299F0(a3);
      goto LABEL_4;
    }
  }
  v8 = sub_18A900(a1, (__int64)v7, 0);
  if ( v8 && a3 )
    goto LABEL_8;
LABEL_4:
  sub_185560(v7);
  return v8;
}
