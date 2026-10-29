bool __fastcall sub_28D0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r14
  int v4; // ecx
  unsigned int v5; // eax
  _BYTE *v6; // rdx
  bool result; // al
  int v8; // r12d
  unsigned __int16 *v9; // rbx
  unsigned __int16 *v10; // r14
  __int64 v11; // rsi
  unsigned int v12; // edx
  __int16 v13; // ax
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a2 + 8) - 28;
  if ( v2 < 0 )
    return 0;
  v3 = *(_QWORD *)(a1 + 120) + *(unsigned int *)(a2 + 4);
  v4 = *(unsigned __int16 *)(v3 + 4);
  if ( (unsigned int)v2 / 0x14uLL < (unsigned __int16)v4 )
    return 0;
  v5 = *(_DWORD *)(v3 + 8);
  if ( !v5 )
    return 0;
  if ( *(_DWORD *)(a1 + 160) < v5 )
    return 0;
  v6 = (_BYTE *)(*(_QWORD *)(a1 + 128) + *(unsigned int *)(*(_QWORD *)(a1 + 136) + 4LL * (v5 - 1)));
  result = v6 == nullptr || *v6 == 0;
  if ( result )
    return 0;
  if ( *(_WORD *)(v3 + 4) )
  {
    v8 = 0;
    v9 = (unsigned __int16 *)(v3 + 12LL * (unsigned int)(v4 - 1) + 28);
    v10 = (unsigned __int16 *)(v3 + 16);
    do
    {
      if ( *((_DWORD *)v9 + 2) )
      {
        v13 = v9[1];
        if ( v13 >= 0 )
        {
          v11 = *v9;
          ++v8;
          if ( (unsigned __int16)v13 > 1u )
            return 0;
          if ( !(_WORD)v11 )
            return 0;
          if ( netnode_supval(*(_QWORD *)(a1 + 152), v11, &v14, 40, 83) <= 0 )
            return 0;
          v12 = *((_DWORD *)v9 + 1);
          if ( v15 < v12 || v15 - v12 < *((_DWORD *)v9 + 2) )
            return 0;
        }
        else
        {
          *((_DWORD *)v9 + 2) = 0;
        }
      }
      v9 -= 6;
    }
    while ( v9 != v10 );
    return v8 != 0;
  }
  return result;
}

