__int64 __fastcall sub_2F920(_QWORD *a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 v4; // rbx
  int v6; // eax
  __int64 *func; // rax
  int v8; // edx
  __int16 v9; // r13
  char v10; // dl
  __int16 v11; // ax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _WORD v16[12]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v3 = *(_BYTE *)(a3 + 1) == 4;
  v17 = __readfsqword(0x28u);
  v4 = a3;
  if ( v3 )
  {
    v6 = *(unsigned __int16 *)(a3 + 6);
    if ( v6 == 161 || v6 == 13 )
      return 1;
  }
  if ( *(_BYTE *)a3 != 2 )
    goto LABEL_3;
  if ( *(_WORD *)(a2 + 24) == 14 )
  {
    v14 = *(unsigned __int16 *)(a2 + 46);
    if ( v14 != 13 && v14 != 161 && *(_BYTE *)(a2 + 81) == 1 )
    {
      v15 = *(unsigned __int16 *)(a2 + 86);
      if ( (v15 == 13 || v15 == 161) && *(_BYTE *)(a2 + 121) == 5 )
        return 1;
    }
  }
  func = (__int64 *)get_func();
  if ( (*(_WORD *)(a2 + 24) & 0xFFFD) != 0xC )
    goto LABEL_3;
  v8 = *(unsigned __int16 *)(a2 + 46);
  if ( v8 == 13 || v8 == 161 || *(_BYTE *)(a2 + 81) != 1 || !func )
    goto LABEL_3;
  v9 = *(_WORD *)(a2 + 86);
  v10 = sub_2F860((__int64)a1, (__int64)v16, *func);
  v11 = -1;
  if ( v10 )
    v11 = v16[4];
  if ( v9 != v11 || *(_BYTE *)(a2 + 121) != 5 )
  {
LABEL_3:
    if ( *(_WORD *)v4 == 1280 )
    {
      if ( !*(_QWORD *)(v4 + 8) && *(_WORD *)(a2 + 24) == 23 )
      {
        v12 = *(unsigned __int16 *)(a2 + 46);
        if ( v12 != 13 && v12 != 161 && *(_BYTE *)(a2 + 81) == 1 )
        {
          v13 = *(unsigned __int16 *)(a2 + 86);
          if ( v13 == 13 || v13 == 161 )
            return 1;
        }
      }
    }
    else if ( *(_WORD *)v4 == 1282 )
    {
      v4 = a2 + 80;
      return (unsigned __int8)sub_2F280(a1, *(_QWORD *)(a2 + 16), *(unsigned __int16 *)(v4 + 6));
    }
    if ( *(_BYTE *)(v4 + 1) != 4 || !v4 )
      return 0;
    return (unsigned __int8)sub_2F280(a1, *(_QWORD *)(a2 + 16), *(unsigned __int16 *)(v4 + 6));
  }
  return 2 * (unsigned int)(*(_WORD *)(a2 + 24) == 12);
}

