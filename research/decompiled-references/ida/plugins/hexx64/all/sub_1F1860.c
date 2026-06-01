unsigned __int64 __fastcall sub_1F1860(__int64 a1)
{
  char v1; // al
  char v3; // al
  __int64 v4; // rax
  const char *v5; // rcx
  __int64 v6; // rax
  _QWORD v7[5]; // [rsp+0h] [rbp-68h] BYREF
  char v8; // [rsp+28h] [rbp-40h]
  __int64 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+38h] [rbp-30h]
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v1 = *(_BYTE *)(a1 + 753);
  if ( (v1 & 8) == 0 && (*(_BYTE *)(a1 + 754) & 0x10) == 0 && (v1 & 4) == 0 && (*(_BYTE *)(a1 + 754) & 0x20) == 0 )
  {
    v3 = *(_BYTE *)(a1 + 755);
    if ( (v3 & 2) == 0
      && (v3 & 4) == 0
      && (v3 & 8) == 0
      && (*(_BYTE *)(a1 + 756) & 4) == 0
      && (*(_BYTE *)(a1 + 758) & 1) == 0
      && (*(_BYTE *)(a1 + 759) & 2) == 0
      && (*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 613LL) & 4) != 0 )
    {
      v8 = 0;
      v10 = 0;
      memset(&v7[1], 0, 32);
      v7[0] = off_4DED48;
      v9 = 0;
      sub_11FBB0(a1, (__int64)v7);
      v4 = *(int *)(a1 + 480);
      if ( (_DWORD)v4 != -1 && (*(_BYTE *)(a1 + 5) & 2) != 0 )
      {
        v5 = s1;
        v6 = *(_QWORD *)(a1 + 432) + 104 * v4;
        if ( *(_QWORD *)(v6 + 40) )
          v5 = *(const char **)(v6 + 32);
        sub_3311F0((_QWORD *)a1, *(_QWORD *)(a1 + 40), 0x2Au, v5);
      }
      v7[0] = off_4DED48;
      if ( v9 )
      {
        *(_QWORD *)&v10 = 0;
        qfree(v9);
      }
    }
  }
  return v11 - __readfsqword(0x28u);
}

