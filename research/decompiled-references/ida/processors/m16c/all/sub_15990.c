__int64 __fastcall sub_15990(__int64 a1)
{
  char *v1; // rdx
  __int64 v3; // rax
  char v4; // r12
  __int16 v5; // ax
  char v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 254) & 2) != 0
    || (v3 = *((int *)sub_CCA0(*(_QWORD *)(a1 + 616), *(_BYTE *)(a1 + 252)) + 1), !(_DWORD)v3) )
  {
    v1 = nullptr;
  }
  else
  {
    v4 = *((_BYTE *)&qword_1C288 + v3);
    if ( v4 == 63 )
    {
      v5 = *(_WORD *)(a1 + 254);
      if ( (v5 & 0x200) != 0 )
        v4 = 76;
      else
        v4 = *((_BYTE *)&qword_1C288 + (v5 & 1) + 2);
    }
    qsnprintf();
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 616) + 4328LL) == 6
      && (*(_BYTE *)(a1 + 255) & 0x20) != 0
      && (v4 == 76 || v4 == 87 || v4 == 66) )
    {
      qsnprintf();
    }
    v1 = &v6;
  }
  (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a1 + 280LL))(a1, 8, v1);
  return 1;
}

