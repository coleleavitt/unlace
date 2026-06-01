__int64 __fastcall sub_231F0(__int64 a1, unsigned int a2, int *a3, unsigned int a4)
{
  unsigned int v5; // ebx
  unsigned __int8 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  int v11; // eax
  char v13; // [rsp+0h] [rbp-28h]
  unsigned int v14; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]

  v5 = a2;
  v15 = __readfsqword(0x28u);
  v7 = (unsigned __int8 *)sub_23020(a1, a4, a2, &v14);
  if ( !v7 )
  {
    v11 = 0;
    goto LABEL_5;
  }
  v10 = *v7;
  if ( (v10 & 0x80u) != 0 )
  {
    if ( (v10 & 0x40) != 0 )
    {
      if ( v14 > 3 )
      {
        v5 = a2 + 4;
        v11 = (v10 << 24) & 0x1F000000 | (v7[2] << 8) | (v7[1] << 16) | v7[3];
        goto LABEL_5;
      }
    }
    else if ( v14 > 1 )
    {
      v5 = a2 + 2;
      v11 = (((_WORD)v10 << 8) & 0x3F00) + v7[1];
      goto LABEL_5;
    }
LABEL_12:
    sub_DA00((__int64)"Stream offset overrun for stream %d (offset %u)", a4, a2, v14, v8, v9, v13);
  }
  if ( !v14 )
    goto LABEL_12;
  v5 = a2 + 1;
  v11 = (unsigned __int8)v10;
LABEL_5:
  *a3 = v11;
  return v5;
}
