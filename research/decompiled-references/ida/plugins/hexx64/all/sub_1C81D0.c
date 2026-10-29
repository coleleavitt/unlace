__int64 __fastcall sub_1C81D0(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, double a5)
{
  unsigned int v6; // ebp
  __int64 v8; // rcx
  unsigned __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v10[9]; // [rsp+10h] [rbp-48h] BYREF

  v9 = a3;
  v10[3] = __readfsqword(0x28u);
  v10[0] = 0;
  v10[1] = 0;
  if ( (unsigned __int8)sub_1C5030((char *)a2, (__int64)v10)
    && (unsigned __int8)sub_1C50C0((__int64)v10, a1, &v9, a4, *(int *)(a2 + 4))
    && (v6 = sub_126F10((int *)a2, *(unsigned __int64 **)(a1 + 112), v9, v8, a5), (_BYTE)v6) )
  {
    *(_DWORD *)(a2 + 4) = a4;
  }
  else
  {
    v6 = 0;
  }
  cleanup_argloc();
  return v6;
}

