unsigned __int64 __fastcall sub_141B80(__int64 a1, unsigned __int64 a2)
{
  __m128i *v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbp
  int v5; // edx
  unsigned __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 *v8; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v7 = a2;
  v9 = __readfsqword(0x28u);
  v2 = *(__m128i **)(a1 + 792);
  v8 = &v7;
  v3 = sub_1418C0(v2 + 1, &v7, &v8);
  if ( *(_DWORD *)(v3 + 32) != 7 )
  {
    v4 = v3 + 24;
    sub_2B0DF0(a1, v7, 0);
    v5 = *(_DWORD *)(v4 + 8);
    if ( (v5 & 1) != 0 )
    {
      if ( (v5 & 2) != 0 )
        goto LABEL_4;
    }
    else
    {
      netnode_delblob();
      v5 = *(_DWORD *)(v4 + 8);
      if ( (v5 & 2) != 0 )
      {
LABEL_4:
        if ( (v5 & 4) != 0 )
        {
LABEL_5:
          *(_DWORD *)(v4 + 8) = 7;
          return v9 - __readfsqword(0x28u);
        }
LABEL_7:
        netnode_delblob();
        goto LABEL_5;
      }
    }
    netnode_delblob();
    if ( (*(_DWORD *)(v4 + 8) & 4) != 0 )
      goto LABEL_5;
    goto LABEL_7;
  }
  return v9 - __readfsqword(0x28u);
}

