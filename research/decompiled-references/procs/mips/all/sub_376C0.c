unsigned __int64 __fastcall sub_376C0(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  char v5; // al
  char v6; // cl
  unsigned int v7; // eax
  unsigned int v9; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+18h] [rbp-40h]
  int v11; // [rsp+20h] [rbp-38h]
  bool v12; // [rsp+24h] [rbp-34h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+30h] [rbp-28h]
  bool v15; // [rsp+34h] [rbp-24h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]
  unsigned __int64 v18; // [rsp+48h] [rbp-10h]

  v18 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 120);
  v9 = v3;
  if ( v3 > 5 )
    goto LABEL_11;
  if ( ((1LL << v3) & 0x29) == 0 )
  {
    if ( ((1LL << v3) & 0x16) != 0 )
    {
      v4 = 8;
      goto LABEL_5;
    }
LABEL_11:
    sub_28E30();
  }
  v4 = 4;
LABEL_5:
  v10 = v4;
  v13 = a3;
  v14 = 0;
  v11 = (v3 & 0xFFFFFFFB) == 0 ? 4 : 8;
  v5 = *(_BYTE *)(a3 + 88);
  v12 = v3 == 3;
  v6 = v5;
  v7 = v5 & 0xF0;
  if ( (v6 & 0xF0) == 0xC0 )
    v7 = *(_DWORD *)(a3 + 28);
  if ( v7 <= 0x10 )
    v7 = getinf(99);
  v16 = 0;
  v15 = (v7 & 0xFFFFFFF0) == 64 || (v7 & 0xFFFFFFF0) == 208;
  v17 = 4LL * ((*(_DWORD *)(a1 + 120) & 0xFFFFFFFB) == 0);
  sub_37550((__int64)&v9, a2);
  return v18 - __readfsqword(0x28u);
}
