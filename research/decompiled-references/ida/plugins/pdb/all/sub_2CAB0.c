unsigned __int64 __fastcall sub_2CAB0(__int64 *a1, __int64 a2, _BYTE *a3, size_t a4, int a5, __int64 a6)
{
  size_t v7; // rdx
  __int64 *v9; // rdi
  int v10; // r12d
  unsigned __int64 v11; // r13
  __int64 v12; // rbp
  char *v13; // rax
  char v14; // dl
  int v15; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  char *v20; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v21[3]; // [rsp+8h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+20h] [rbp-30h]

  v7 = a4;
  v9 = a1 + 6;
  v22 = __readfsqword(0x28u);
  *((_DWORD *)v9 - 4) = 0;
  *(v9 - 6) = a2;
  *(v9 - 5) = 0;
  *((_OWORD *)v9 - 2) = 0;
  v9[87] = a6;
  *(_DWORD *)((char *)v9 - 13) = 0;
  *(v9 - 1) = 0;
  v9[86] = 0;
  memset(
    (void *)((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - ((unsigned int)v9 & 0xFFFFFFF8) + 744) >> 3));
  if ( a5 != 1 )
  {
    if ( a4 )
      goto LABEL_5;
    while ( !under_debugger )
    {
      interr(30203);
LABEL_5:
      sub_25460(a1 + 1, a3, v7);
    }
LABEL_45:
    BUG();
  }
  v20 = a3;
  v10 = 32;
  v11 = (unsigned __int64)&a3[a4];
  v12 = 1;
  while ( 1 )
  {
    if ( (v12 & ~a2) != 0 )
      goto LABEL_10;
    if ( (unsigned __int64)(v12 - 1) <= 0x1FF )
    {
      v13 = v20;
      ++*((_BYTE *)a1 + 32);
      v14 = 0;
      if ( (unsigned __int64)v13 < v11 )
        v14 = *v13++;
      LOBYTE(v21[0]) = v14;
      v20 = v13;
      sub_25460(a1 + 1, v21, 1u);
      goto LABEL_10;
    }
    if ( (unsigned __int64)(v12 - 1024) <= 0x3FFFC00 )
      goto LABEL_22;
    if ( v12 == 0x8000000 )
    {
      ++*((_BYTE *)a1 + 34);
      v17 = unpack_dq(&v20, v11);
      goto LABEL_28;
    }
    if ( v12 == 0x10000000 )
    {
      v18 = (unsigned __int64)v20;
      ++*((_BYTE *)a1 + 35);
      v19 = v18;
      do
      {
        if ( v19 >= v11 )
        {
          v18 = 0;
          goto LABEL_34;
        }
        ++v19;
      }
      while ( *(_BYTE *)(v19 - 1) );
      v20 = (char *)v19;
LABEL_34:
      v17 = qstrdup(v18);
LABEL_28:
      v21[0] = v17;
      sub_25460(a1 + 1, v21, 8u);
LABEL_10:
      v12 *= 2;
      if ( !--v10 )
        goto LABEL_24;
      goto LABEL_11;
    }
    if ( v12 != 0x20000000 )
      break;
    ++*((_BYTE *)a1 + 36);
    v15 = unpack_dd(&v20, v11);
LABEL_23:
    LODWORD(v21[0]) = v15;
    sub_25460(a1 + 1, v21, 4u);
    v12 *= 2;
    if ( !--v10 )
      goto LABEL_24;
LABEL_11:
    a2 = *a1;
  }
  if ( v12 == 0x40000000 )
  {
    ++*((_BYTE *)a1 + 37);
    v17 = unpack_dq(&v20, v11);
    goto LABEL_28;
  }
  if ( v12 != 0x80000000LL )
  {
    if ( under_debugger )
      goto LABEL_45;
    interr(30200);
LABEL_22:
    ++*((_BYTE *)a1 + 33);
    v15 = unpack_dd(&v20, v11);
    goto LABEL_23;
  }
  ++*((_BYTE *)a1 + 38);
  v12 = (__int64)v21;
  if ( (unsigned __int8)sub_2C900(v21, (unsigned __int64 *)&v20, v11) )
    goto LABEL_44;
  if ( !*(_BYTE *)a1[93] )
  {
    sub_299B0();
    *(_BYTE *)a1[93] = 1;
  }
  while ( 1 )
  {
LABEL_24:
    if ( *((unsigned __int8 *)a1 + 32)
       + 24 * *((unsigned __int8 *)a1 + 38)
       + 4 * (*((unsigned __int8 *)a1 + 36) + *((unsigned __int8 *)a1 + 33))
       + 8 * (*((unsigned __int8 *)a1 + 37) + *((unsigned __int8 *)a1 + 34) + *((unsigned __int8 *)a1 + 35)) != a1[2] )
      goto LABEL_42;
    if ( v20 == (char *)v11 )
      return v22 - __readfsqword(0x28u);
    if ( under_debugger )
      goto LABEL_45;
    interr(30202);
LABEL_42:
    if ( under_debugger )
      goto LABEL_45;
    interr(30201);
LABEL_44:
    sub_25460(a1 + 1, (const void *)v12, 0x18u);
  }
}

