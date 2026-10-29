__int64 __fastcall sub_30800(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  __int64 v16; // r13
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20[8]; // [rsp+8h] [rbp-40h] BYREF

  v20[0] = a4;
  if ( !a4 )
  {
    LODWORD(a6) = 1;
    return (unsigned int)a6;
  }
  if ( a3 != -1 )
    qlseek();
  sub_30010(a2, v20, 1u, a6, a3, a5);
  v10 = v20[0];
  v11 = a1[1];
  if ( v11 < v20[0] )
  {
    v18 = *a1;
    if ( a1[2] < v20[0] )
    {
      v19 = qvector_reserve();
      v11 = a1[1];
      *a1 = v19;
      v18 = v19;
    }
    memset((void *)(v18 + v11), 0, v10 - v11);
    a1[1] = v10;
    v12 = *a1;
    if ( a7 )
    {
      v13 = a6;
      sub_19350((__int64)"Loading %s");
LABEL_9:
      v15 = 0;
      while ( 1 )
      {
        LODWORD(a6) = callui(27, v13, v14);
        if ( (_BYTE)a6 )
          goto LABEL_15;
        v13 = v12;
        v16 = v10 - v15;
        if ( v10 - v15 > 0x8000 )
          v16 = 0x8000;
        if ( qlread() != v16 )
          goto LABEL_16;
        v15 += v16;
        v12 += v16;
        if ( v15 >= v10 )
          goto LABEL_15;
      }
    }
LABEL_21:
    LOBYTE(a6) = qlread() == v10;
    return (unsigned int)a6;
  }
  if ( v20[0] != v11 )
    a1[1] = v20[0];
  v12 = *a1;
  if ( !a7 )
    goto LABEL_21;
  v13 = a6;
  sub_19350((__int64)"Loading %s");
  if ( v10 )
    goto LABEL_9;
LABEL_15:
  LODWORD(a6) = 1;
LABEL_16:
  callui(24, 10, 0);
  return (unsigned int)a6;
}

