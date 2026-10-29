__int64 __fastcall sub_4360(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  _DWORD v6[10]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v3 = *((unsigned __int16 *)a2 + 2);
  if ( (_WORD)v3 && netnode_supval(*(_QWORD *)(a1 + 152), v3, v6, 40, 83) > 0 && (v4 = *a2, (unsigned int)v4 < v6[2]) )
    return v4 + *(_QWORD *)(a1 + 144) + v6[3];
  else
    return -1;
}

