void __fastcall sub_21946(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  __int64 i; // rbx
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  unsigned int *v10; // rax
  __int64 v11; // rdx

  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    v4 = sub_E2050();
  for ( i = a2; i; i = *(_QWORD *)(i + 64) )
  {
    if ( *(_DWORD *)(a2 + 132) || (*(_BYTE *)(*(_QWORD *)(i + 80) + 5LL) & 0x10) == 0 || *(_BYTE *)(i + 33) == 90 )
    {
      v9 = *(unsigned int *)(i + 104);
      if ( !(_DWORD)v9 )
      {
        v10 = *(unsigned int **)(*(_QWORD *)(i + 112) + 32LL);
        if ( v10 )
          v9 = *v10;
        v11 = *(unsigned int *)(i + 92);
        if ( a3 )
        {
          sub_E1710(v4, 165, v11, v9, 0);
          sub_D04B0(v4, *(_QWORD *)(i + 80), 4294967289LL);
          sub_E1710(v4, 80, *(unsigned int *)(i + 92), *(unsigned int *)(i + 96), 0);
          sub_E1710(v4, 75, 0, *(unsigned int *)(i + 92), 0);
        }
        else
        {
          sub_E1710(v4, 164, v11, v9, *(unsigned int *)(i + 96));
          sub_D04B0(v4, *(_QWORD *)(i + 80), 4294967289LL);
        }
      }
    }
    else
    {
      sub_E1710(v4, 75, 0, *(unsigned int *)(i + 96), 0);
      sub_E1710(v4, 31, *(unsigned int *)(i + 100), 0, 0);
      sub_E1710(v4, 94, *(unsigned int *)(i + 100), 0, *(unsigned int *)(i + 96));
      v6 = *(_DWORD *)(v4 + 144);
      v7 = v6 - 2;
      if ( v6 - 2 < 0 )
        v7 = v6 - 1;
      v8 = &unk_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v4 + 103LL) )
        v8 = (_DWORD *)(*(_QWORD *)(v4 + 136) + 24LL * v7);
      v8[2] = v6;
    }
  }
}
