unsigned __int64 __fastcall sub_17F6C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, __int64 a5, int a6)
{
  bool v9; // zf
  __int64 v11; // rbx
  _DWORD *v13; // rdi
  __int64 v14; // r15
  unsigned int v15; // eax
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v9 = *(_BYTE *)a5 == 4;
  v18 = __readfsqword(0x28u);
  if ( v9
    && (v13 = *(_DWORD **)(a5 + 8), *v13 == 12)
    && (v14 = sub_1186A0((__int64)v13, &v17)) != 0
    && *(_BYTE *)v17 == 10 )
  {
    sub_120F80(a1, *(unsigned __int8 **)(v17 + 8));
    *(_DWORD *)(a1 + 4) = a6;
    v15 = sub_325C90(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL), *(unsigned int *)(v14 + 4), 1);
    sub_17F820(a2, a1, v15);
  }
  else
  {
    v11 = j__qalloc_or_throw();
    *(_QWORD *)(v11 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v11 + 40) = 0;
    *(_QWORD *)(v11 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v11 + 56) = 0;
    *(_QWORD *)(v11 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v11 + 72) = 0;
    sub_32B920(v11, a3);
    *(_BYTE *)a1 = 4;
    *(_QWORD *)(a1 + 8) = v11;
    *(_DWORD *)v11 = 2;
    if ( a4 )
      sub_120F80(v11 + 32, a4);
    sub_120F80(v11 + 48, (unsigned __int8 *)a5);
    *(_DWORD *)(a1 + 4) = a6;
    *(_DWORD *)(v11 + 68) = a6;
  }
  return v18 - __readfsqword(0x28u);
}

