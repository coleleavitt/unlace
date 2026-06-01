char __fastcall sub_37B70(__int64 a1, __int64 a2, int a3)
{
  char v4; // al
  char v6; // dl
  unsigned int v7; // eax
  char v8; // al
  char result; // al
  unsigned int v10; // ecx
  int v11; // esi
  unsigned int v12; // ecx
  __int64 v13; // rdx
  bool v14; // zf
  char v15; // dl
  unsigned int v16; // eax
  unsigned int v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+8h] [rbp-50h]
  int v19; // [rsp+10h] [rbp-48h]
  bool v20; // [rsp+14h] [rbp-44h]
  __int64 v21; // [rsp+18h] [rbp-40h]
  int v22; // [rsp+20h] [rbp-38h]
  char v23; // [rsp+24h] [rbp-34h]
  __int64 v24; // [rsp+28h] [rbp-30h]
  __int64 v25; // [rsp+30h] [rbp-28h]
  unsigned __int64 v26; // [rsp+38h] [rbp-20h]

  v4 = *(_BYTE *)(a2 + 88);
  v26 = __readfsqword(0x28u);
  v6 = v4;
  v7 = v4 & 0xF0;
  if ( (v6 & 0xF0) == 0xC0 )
    v7 = *(_DWORD *)(a2 + 28);
  if ( v7 <= 0x10 )
    v7 = getinf(99);
  if ( v7 == 176 || v7 == 256 )
  {
    v10 = *(_DWORD *)(a1 + 120);
    if ( v10 <= 5 )
    {
      if ( ((1LL << v10) & 0x29) != 0 )
      {
        v11 = 4;
      }
      else
      {
        if ( ((1LL << v10) & 0x16) == 0 )
          goto LABEL_30;
        v11 = 8;
      }
      return sub_354B0(a2, v11);
    }
LABEL_30:
    sub_28E30();
    goto LABEL_31;
  }
  v8 = *(_BYTE *)(a2 + 88);
  if ( (v8 & 0xF0) == 0xC0 )
  {
    if ( *(_DWORD *)(a2 + 28) > 0x10u )
      goto LABEL_9;
  }
  else if ( (v8 & 0xF0u) > 0x10 )
  {
    goto LABEL_9;
  }
  getinf(99);
LABEL_9:
  result = sub_367C0(a1, (int *)(a2 + 40), (_QWORD *)(a2 + 32));
  if ( result )
  {
    v12 = *(_DWORD *)(a1 + 120);
    v17 = v12;
    if ( v12 <= 5 )
    {
      if ( ((1LL << v12) & 0x29) != 0 )
      {
        v13 = 4;
LABEL_20:
        v18 = v13;
        v21 = a2;
        v22 = a3;
        v19 = (v12 & 0xFFFFFFFB) == 0 ? 4 : 8;
        v20 = v12 == 3;
        if ( a3 )
        {
LABEL_21:
          v23 = result;
          v14 = (*(_DWORD *)(a1 + 120) & 0xFFFFFFFB) == 0;
          v24 = 0;
          v25 = 4LL * v14;
          return sub_377F0((__int64)&v17);
        }
        v15 = *(_BYTE *)(a2 + 88);
        v16 = v15 & 0xF0;
        if ( (v15 & 0xF0) == 0xC0 )
          v16 = *(_DWORD *)(a2 + 28);
        if ( v16 > 0x10 )
        {
LABEL_29:
          result = (v16 & 0xFFFFFFF0) == 208 || (v16 & 0xFFFFFFF0) == 64;
          goto LABEL_21;
        }
LABEL_31:
        v16 = getinf(99);
        goto LABEL_29;
      }
      if ( ((1LL << v12) & 0x16) != 0 )
      {
        v13 = 8;
        goto LABEL_20;
      }
    }
    goto LABEL_30;
  }
  return result;
}

