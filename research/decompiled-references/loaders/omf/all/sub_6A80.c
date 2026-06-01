__int64 __fastcall sub_6A80(unsigned __int8 a1, _QWORD *a2, char *a3, __int64 a4)
{
  char v4; // r13
  unsigned __int8 v5; // al
  char *v7; // rdx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax

  v4 = (char)a3;
  v5 = a1 >> 4;
  *(_QWORD *)(a4 + 48) = 0;
  if ( (a1 & 0x80u) != 0 )
  {
    a3 = (char *)&unk_14440 + 9 * ((a1 >> 4) & 3);
    *(_BYTE *)(a4 + 64) = ((unsigned __int8)a3[8] >> 2) & 7;
    *(_QWORD *)(a4 + 48) = *(_QWORD *)a3;
  }
  else
  {
    *(_BYTE *)(a4 + 64) = v5;
    if ( v5 <= 2u )
      *(_QWORD *)(a4 + 48) = (unsigned __int16)sub_6A10((__int64)a2, (__int64)a2, (__int64)a3, a4);
  }
  *(_QWORD *)(a4 + 56) = 0;
  if ( (a1 & 8) != 0 )
  {
    v7 = (char *)&unk_14480 + 9 * (a1 & 3);
    *(_BYTE *)(a4 + 65) = ((unsigned __int8)v7[8] >> 2) & 3;
    result = *(_QWORD *)v7;
  }
  else
  {
    *(_BYTE *)(a4 + 65) = a1 & 3;
    result = (unsigned __int16)sub_6A10((__int64)a2, (__int64)a2, (__int64)a3, a4);
  }
  *(_QWORD *)(a4 + 56) = result;
  *(_QWORD *)(a4 + 32) = 0;
  if ( (a1 & 4) == 0 )
  {
    if ( v4 )
    {
      sub_5890((__int64)a2, -1, 4);
      v11 = a2[6];
      v10 = v11 + 4;
      result = *(int *)(*a2 + v11);
    }
    else
    {
      sub_5890((__int64)a2, -1, 2);
      v9 = a2[6];
      v10 = v9 + 2;
      result = *(__int16 *)(*a2 + v9);
    }
    a2[6] = v10;
    *(_QWORD *)(a4 + 32) = result;
  }
  return result;
}
