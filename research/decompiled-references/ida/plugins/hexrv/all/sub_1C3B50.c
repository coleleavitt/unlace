__int64 __fastcall sub_1C3B50(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned int v5; // ebp
  __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v8[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = a3;
  v8[3] = __readfsqword(0x28u);
  v8[0] = 0;
  v8[1] = 0;
  if ( (unsigned __int8)sub_1C09B0((char *)a2, (__int64)v8)
    && (unsigned __int8)sub_1C0A40((__int64)v8, a1, &v7, a4, *(int *)(a2 + 4))
    && (v5 = sub_122A50(a2, *(_QWORD *)(a1 + 112), v7), (_BYTE)v5) )
  {
    *(_DWORD *)(a2 + 4) = a4;
  }
  else
  {
    v5 = 0;
  }
  cleanup_argloc();
  return v5;
}

