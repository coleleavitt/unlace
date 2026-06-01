__int64 __fastcall sub_15600(__int64 a1, __int64 *a2, int *a3, __int16 a4)
{
  int v5; // r15d
  __int64 v6; // r14
  unsigned __int8 v7; // al
  unsigned __int8 v8; // bl
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // r13
  __int64 result; // rax
  char v13[4]; // [rsp+1Ch] [rbp-4Ch] BYREF
  unsigned __int16 v14; // [rsp+20h] [rbp-48h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v5 = *a3;
  v15 = __readfsqword(0x28u);
  v6 = *a2;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v5 )
      {
LABEL_15:
        result = 0;
        goto LABEL_16;
      }
      v7 = sub_19A50(a1);
      v8 = v7;
      if ( v7 > 8u )
        goto LABEL_20;
      *(_BYTE *)v6 = v7;
      if ( v7 > 6u )
        break;
      ++v6;
      --v5;
      if ( !--a4 )
        goto LABEL_11;
    }
    if ( (unsigned int)(v5 - 1) <= 1 )
      break;
    v5 -= 3;
    v9 = sub_19930(a1);
    v10 = v9;
    if ( v8 == 7 )
    {
      if ( *(_WORD *)(a1 + 33023) == v9 )
      {
        v10 = *(_WORD *)(a1 + 33021);
        *(_BYTE *)v6 = 10;
      }
      else if ( sub_13D40(a1, 1, v9, 0xFFu, v13) )
      {
        v10 = v14;
      }
      else
      {
        *(_BYTE *)v6 = 9;
      }
    }
    else if ( v9 )
    {
      if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 33153) )
        goto LABEL_15;
    }
    else
    {
      *(_BYTE *)(a1 + 33149) |= 0x10u;
    }
    *(_WORD *)(v6 + 1) = v10;
    v6 += 3;
    if ( !--a4 )
    {
LABEL_11:
      *a2 = v6;
      result = 1;
      goto LABEL_16;
    }
  }
LABEL_20:
  --v5;
  result = 0;
LABEL_16:
  *a3 = v5;
  return result;
}

