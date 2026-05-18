__int64 __fastcall sub_224F4(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 result; // rax
  signed int v8; // r13d
  signed int *v9; // rax
  int i; // r12d
  int v11; // ecx
  int v12; // r12d
  int v13; // edx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // edx
  char v17; // al
  unsigned int v18; // r14d
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  __int64 v21; // r14
  int v22; // ecx
  int j; // r9d
  int v24; // eax
  _DWORD *v25; // rdx
  __int64 v26; // r9
  unsigned int v27; // eax
  __int64 v28; // [rsp+8h] [rbp-60h]
  int v32; // [rsp+28h] [rbp-40h]
  __int64 v33; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 )
    v5 = sub_E2050(a1);
  v6 = a2;
  result = (unsigned int)-(a4 == 0);
  while ( v6 )
  {
    v8 = 0;
    v28 = *(_QWORD *)(v6 + 80);
    if ( !*(_BYTE *)(v6 + 140) )
    {
      v9 = *(signed int **)(*(_QWORD *)(v6 + 112) + 32LL);
      if ( v9 )
        v8 = *v9;
    }
    for ( i = 0; i < v8; ++i )
    {
      v11 = *(_DWORD *)(v6 + 124);
      if ( i == 1 && *(char **)(v28 + 56) == "nth_value" )
        sub_E1710(v5, 94, *(unsigned int *)(a2 + 88), (unsigned int)(v11 + 1), a5 + 1);
      else
        sub_E1710(v5, 94, a3, (unsigned int)(i + v11), a5 + i);
    }
    if ( !*(_DWORD *)(a2 + 132) && (*(_BYTE *)(v28 + 5) & 0x10) != 0 && *(_BYTE *)(v6 + 33) != 90 )
    {
      v12 = sub_E1710(v5, 50, a5, 0, 0);
      if ( a4 )
      {
        sub_E1770(v5, 22, *(unsigned int *)(v6 + 100), 0, a5, 1);
        sub_E1710(v5, 130, *(unsigned int *)(v6 + 100), 0, 0);
        v13 = *(_DWORD *)(v5 + 144);
        v14 = v13 - 2;
        if ( v13 - 2 < 0 )
          v14 = v13 - 1;
        v15 = &unk_241F50;
        if ( !*(_BYTE *)(*(_QWORD *)v5 + 103LL) )
          v15 = (_DWORD *)(*(_QWORD *)(v5 + 136) + 24LL * v14);
        v15[2] = v13;
      }
      else
      {
        sub_E1710(v5, 86, (unsigned int)(*(_DWORD *)(v6 + 104) + 1), 1, 0);
        sub_E1710(v5, 81, a5, *(unsigned int *)(v6 + 104), 0);
        sub_E1710(v5, 97, *(unsigned int *)(v6 + 104), 2, (unsigned int)(*(_DWORD *)(v6 + 104) + 2));
        sub_E1710(v5, 138, *(unsigned int *)(v6 + 100), (unsigned int)(*(_DWORD *)(v6 + 104) + 2), 0);
      }
      v16 = *(_DWORD *)(v5 + 144);
      if ( v12 < 0 )
LABEL_60:
        v12 = v16 - 1;
LABEL_61:
      result = (__int64)&unk_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v5 + 103LL) )
        result = 24LL * v12 + *(_QWORD *)(v5 + 136);
      *(_DWORD *)(result + 8) = v16;
      goto LABEL_64;
    }
    v12 = *(_DWORD *)(v6 + 104);
    if ( v12 )
    {
      result = sub_E1710(v5, 86, v12 - a4 + 1, 1, 0);
      goto LABEL_64;
    }
    result = v28;
    if ( *(__int64 (__fastcall **)())(v28 + 24) != nullsub_60 )
    {
      if ( *(_QWORD *)(v6 + 72) )
      {
        v17 = *(_BYTE *)(a1 + 31);
        if ( v17 )
        {
          v19 = v17 - 1;
          *(_BYTE *)(a1 + 31) = v19;
          v18 = *(_DWORD *)(a1 + 4LL * v19 + 216);
        }
        else
        {
          v18 = *(_DWORD *)(a1 + 56) + 1;
          *(_DWORD *)(a1 + 56) = v18;
        }
        sub_E1710(v5, 94, a3, (unsigned int)(v8 + *(_DWORD *)(v6 + 124)), v18);
        v12 = sub_E1710(v5, 16, v18, 0, 1);
        if ( v18 )
          sub_CEFE0(a1, v18, v20);
      }
      LODWORD(v21) = a5;
      if ( *(_BYTE *)(v6 + 140) )
      {
        v32 = *(_DWORD *)(v5 + 144);
        v8 = **(_DWORD **)(*(_QWORD *)(v6 + 112) + 32LL);
        v21 = (unsigned int)sub_CF000(a1, (unsigned int)v8);
        sub_128C80(a1, *(_QWORD *)(*(_QWORD *)(v6 + 112) + 32LL), v21, 0, 0);
        v22 = *(_DWORD *)(v5 + 144);
        for ( j = v32; v22 > j; ++j )
        {
          v24 = j;
          if ( j < 0 )
            v24 = *(_DWORD *)(v5 + 144) - 1;
          v25 = &unk_241F50;
          if ( !*(_BYTE *)(*(_QWORD *)v5 + 103LL) )
            v25 = (_DWORD *)(*(_QWORD *)(v5 + 136) + 24LL * v24);
          if ( *(_BYTE *)v25 == 94 && v25[1] == *(_DWORD *)(a2 + 88) )
            v25[1] = a3;
        }
      }
      if ( (*(_BYTE *)(v28 + 4) & 0x20) != 0 )
      {
        v26 = sub_F3950(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 112) + 32LL) + 8LL));
        if ( !v26 )
          v26 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v33 = v26;
        v27 = sub_E1710(v5, 85, 0, 0, 0);
        sub_DCC50(v5, v27, v33, 4294967294LL);
      }
      sub_E1710(v5, 162 - (unsigned int)(a4 != 0), a4, (unsigned int)v21, *(unsigned int *)(v6 + 92));
      sub_D04B0(v5, v28, 4294967289LL);
      result = *(int *)(v5 + 144);
      if ( (int)result > 0 )
      {
        result = *(_QWORD *)(v5 + 136) + 24 * result;
        *(_WORD *)(result - 22) = (unsigned __int8)v8;
      }
      if ( *(_BYTE *)(v6 + 140) )
      {
        if ( v8 == 1 )
        {
          result = sub_CF060(a1, (unsigned int)v21);
        }
        else if ( v8 > *(_DWORD *)(a1 + 40) )
        {
          *(_DWORD *)(a1 + 40) = v8;
          *(_DWORD *)(a1 + 44) = v21;
        }
      }
      if ( v12 )
      {
        v16 = *(_DWORD *)(v5 + 144);
        if ( v12 < 0 )
          goto LABEL_60;
        goto LABEL_61;
      }
    }
LABEL_64:
    v6 = *(_QWORD *)(v6 + 64);
  }
  return result;
}
