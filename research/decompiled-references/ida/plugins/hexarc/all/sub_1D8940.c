__int64 __fastcall sub_1D8940(__int128 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 *v9; // rdi
  char v10; // al
  __int64 v11; // rdx
  _QWORD *v12; // r15
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int128 v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  unsigned int v20; // [rsp+Ch] [rbp-7Ch]
  __int64 v21; // [rsp+10h] [rbp-78h] BYREF
  __int128 v22; // [rsp+18h] [rbp-70h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  char v24; // [rsp+30h] [rbp-58h]
  unsigned __int64 v25; // [rsp+38h] [rbp-50h]
  char v26; // [rsp+40h] [rbp-48h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v3 = *((_QWORD *)&a1 + 1);
  v4 = a1;
  v27 = __readfsqword(0x28u);
  v20 = sub_1D8580(a1, a2, a3, 0);
  if ( v20 == 1 )
  {
    if ( (*(_BYTE *)a3 & 0xFB) != 1 )
      return (unsigned int)-1;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL);
    if ( !v6 )
      return (unsigned int)-1;
    v7 = sub_109C80(v6, 0);
    v8 = v7;
    if ( !v7 )
      return (unsigned int)-1;
    ++*(_DWORD *)(v7 + 24);
    v9 = (unsigned __int64 *)(*(_QWORD *)v7 + 24LL * *(int *)(v4 + 72));
    v10 = *(_BYTE *)a3;
    if ( *(_BYTE *)a3 == 1 )
    {
      v11 = *(int *)(a3 + 8);
    }
    else if ( v10 == 5 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
    }
    else
    {
      v10 = 0;
      v11 = -1;
    }
    v24 = v10;
    v21 = 0;
    v23 = v11;
    v25 = 0xFFFFFFFF00000001LL;
    v26 = 1;
    v22 = 0;
    v12 = sub_FE730(v9, (__int64)&v21);
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
    if ( v12 )
    {
      v13 = 0;
      v14 = 0;
      if ( !v12[1] )
        goto LABEL_19;
      while ( 1 )
      {
        v18 = *(unsigned int *)(*v12 + 4 * v14);
        if ( !(_DWORD)v18 )
          goto LABEL_18;
        v15 = *(_QWORD *)(v4 + 64);
        if ( (unsigned int)v18 >= *(_DWORD *)(v15 + 64) )
        {
          if ( !under_debugger )
            sub_37B760(52719);
LABEL_30:
          BUG();
        }
        *((_QWORD *)&v16 + 1) = v3;
        *(_QWORD *)&v16 = *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8 * v18);
        v17 = sub_1D8580(v16, 0, a3, 0);
        if ( v17 == -1 )
          goto LABEL_18;
        if ( v17 == 1 )
          break;
        v14 = ++v13;
        if ( (unsigned __int64)v13 >= v12[1] )
        {
          v20 = 0;
          goto LABEL_19;
        }
      }
      if ( *((_DWORD *)v12 + 10) <= *(_DWORD *)(a3 + 4) )
      {
        if ( !under_debugger )
          sub_37B760(50669);
        goto LABEL_30;
      }
    }
LABEL_18:
    v20 = -1;
LABEL_19:
    sub_FE750(v8);
  }
  return v20;
}

