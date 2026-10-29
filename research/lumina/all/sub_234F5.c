__int64 __fastcall sub_234F5(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v4; // r15d
  _QWORD *v5; // r12
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // r14
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rbp
  int j; // r12d
  int v18; // edx
  int *v19; // [rsp+8h] [rbp-60h]
  unsigned int *v20; // [rsp+8h] [rbp-60h]
  __int64 v21; // [rsp+8h] [rbp-60h]
  unsigned int v22; // [rsp+10h] [rbp-58h]
  int i; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+28h] [rbp-40h]

  v4 = 0;
  v5 = *(_QWORD **)(a3 + 48);
  v6 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)a3 = 1;
  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( *(_DWORD *)(a3 + 56) <= i )
      break;
    LODWORD(v8) = 0;
    v19 = *(int **)(*v5 + 32LL);
    if ( (*(_BYTE *)(*v5 + 7LL) & 1) != 0 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*v5 + 64LL) + 72LL);
      if ( *(_DWORD *)(a3 + 44) && (*(_BYTE *)(v5[1] + 4LL) & 0x20) != 0 && a2 )
      {
        if ( !v4 )
        {
          v4 = *(_DWORD *)(a1 + 56) + 1;
          *(_DWORD *)(a1 + 56) = v4;
        }
        sub_E1710(v6, 80, a2, (unsigned int)v4, 0);
      }
      v8 = (unsigned int)(*(_DWORD *)(a1 + 68) - 1);
      *(_DWORD *)(a1 + 68) = v8;
      sub_1253C0(a1, v9, v8, 16);
    }
    if ( v19 )
    {
      v10 = *v19;
      v22 = sub_CF000(a1, (unsigned int)*v19);
      sub_128C80(a1, v19, v22, 0, 1);
    }
    else
    {
      v22 = 0;
      v10 = 0;
    }
    if ( *((int *)v5 + 5) >= 0 && v19 )
    {
      if ( !(_DWORD)v8 )
      {
        LODWORD(v8) = *(_DWORD *)(a1 + 68) - 1;
        *(_DWORD *)(a1 + 68) = v8;
      }
      *((_DWORD *)v5 + 5) = sub_F4560(a1, a4, *((unsigned int *)v5 + 5), (unsigned int)v8, v19, v22);
    }
    if ( (*(_BYTE *)(v5[1] + 4LL) & 0x20) != 0 )
    {
      v11 = 0;
      v20 = (unsigned int *)(v19 + 2);
      v12 = 0;
      while ( !v12 && v10 > (int)v11 )
      {
        v26 = v11;
        v12 = sub_F3950(a1, *(_QWORD *)&v20[6 * v11]);
        v11 = v26 + 1;
      }
      v13 = v12;
      if ( !v12 )
        v13 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      if ( !v4 )
      {
        v4 = *(_DWORD *)(a3 + 44);
        if ( v4 )
        {
          v4 = *(_DWORD *)(a1 + 56) + 1;
          *(_DWORD *)(a1 + 56) = v4;
        }
      }
      v21 = v13;
      v14 = sub_E1710(v6, 85, (unsigned int)v4, 0, 0);
      sub_DCC50(v6, v14, v21, 4294967294LL);
    }
    sub_E1710(v6, 162, 0, v22, *((unsigned int *)v5 + 4));
    sub_D04B0(v6, v5[1], 4294967289LL);
    v15 = *(int *)(v6 + 144);
    if ( (int)v15 > 0 )
      *(_WORD *)(*(_QWORD *)(v6 + 136) + 24 * v15 - 22) = (unsigned __int8)v10;
    if ( v10 == 1 )
    {
      sub_CF060(a1, v22);
    }
    else if ( v10 > *(_DWORD *)(a1 + 40) )
    {
      *(_DWORD *)(a1 + 40) = v10;
      *(_DWORD *)(a1 + 44) = v22;
    }
    if ( (_DWORD)v8 )
      sub_E0BB0(v6, (unsigned int)v8);
    v5 += 4;
  }
  if ( !v4 )
  {
    if ( !*(_DWORD *)(a3 + 44) || !a2 )
      goto LABEL_44;
    v4 = a2;
  }
  result = sub_E1710(v6, 15, (unsigned int)v4, 0, 0);
  v4 = result;
LABEL_44:
  v16 = *(_QWORD *)(a3 + 32);
  for ( j = 0; *(_DWORD *)(a3 + 44) > j; ++j )
  {
    if ( *(_QWORD *)(a1 + 16) )
      result = sub_127300(a1, *(_QWORD *)(v16 + 8), *(unsigned int *)(v16 + 20));
    v16 += 32;
  }
  *(_BYTE *)a3 = 0;
  if ( v4 )
  {
    v18 = *(_DWORD *)(v6 + 144);
    result = (unsigned int)(v18 - 1);
    if ( v4 == (_DWORD)result )
    {
      *(_DWORD *)(v6 + 144) = v4;
    }
    else
    {
      if ( v4 < 0 )
        v4 = v18 - 1;
      result = (__int64)&unk_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v6 + 103LL) )
        result = 24LL * v4 + *(_QWORD *)(v6 + 136);
      *(_DWORD *)(result + 8) = v18;
    }
  }
  return result;
}
