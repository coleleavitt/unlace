__int64 __fastcall sub_CFA10(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // rax
  __int64 v4; // r8
  int v5; // edx
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  _QWORD v11[3]; // [rsp+0h] [rbp-18h]

  v11[1] = __readfsqword(0x28u);
  *(_QWORD *)(a2 + 64) = 0x3FF0000000000000LL;
  if ( *(_BYTE *)(a1 + 40) )
  {
    v2 = *(_DWORD *)a2;
    v3 = *(_QWORD *)(a2 + 8);
    v11[0] = 0;
    if ( v2 <= 0 )
      goto LABEL_13;
    v4 = v3 + 4 * (3LL * (unsigned int)(v2 - 1) + 3);
    v5 = 0;
    do
    {
      ++v5;
      if ( *(_BYTE *)(v3 + 5) )
      {
        if ( *(_BYTE *)(v3 + 4) == 2 )
        {
          v6 = *(unsigned __int8 *)(a1 + 41);
          if ( *(_DWORD *)v3 >= v6 )
            *((_DWORD *)v11 + *(_DWORD *)v3 - v6) = v5;
        }
      }
      v3 += 12;
    }
    while ( v3 != v4 );
    if ( LODWORD(v11[0]) )
    {
      v7 = LODWORD(v11[0]) - 1;
      *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8 * v7) = 1;
      *(_BYTE *)(*(_QWORD *)(a2 + 32) + 8 * v7 + 4) = 1;
      if ( HIDWORD(v11[0]) )
      {
        v8 = *(_QWORD *)(a2 + 32);
        v9 = HIDWORD(v11[0]) - 1;
        *(_QWORD *)(a2 + 72) = 20;
        *(_QWORD *)(a2 + 64) = 0x4034000000000000LL;
        *(_DWORD *)(v8 + 8LL * v9) = 2;
        *(_BYTE *)(*(_QWORD *)(a2 + 32) + 8LL * v9 + 4) = 1;
      }
    }
    else
    {
LABEL_13:
      *(_QWORD *)(a2 + 72) = 0x7FFFFFFF;
      *(_QWORD *)(a2 + 64) = 0x41DFFFFFFFC00000LL;
    }
  }
  return 0;
}
