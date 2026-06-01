unsigned __int64 __fastcall sub_1838C0(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        int a6)
{
  bool v9; // zf
  __int64 v11; // rbx
  _DWORD *v13; // rdi
  __int64 *v14; // rbx
  __int64 v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v9 = *(_BYTE *)a5 == 4;
  v20 = __readfsqword(0x28u);
  if ( v9
    && (v13 = *(_DWORD **)(a5 + 8), *v13 == 12)
    && (v14 = a2, a2 = &v19, (v15 = sub_11C8A0((__int64)v13, &v19)) != 0)
    && *(_BYTE *)v19 == 10 )
  {
    sub_125180((unsigned __int8 *)a1, *(unsigned __int8 **)(v19 + 8));
    *(_DWORD *)(a1 + 4) = a6;
    v16 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 16LL), *(_DWORD *)(v15 + 4), 1);
    sub_183A20(v14, a1, v16, v17);
  }
  else
  {
    v11 = j__qalloc_or_throw(80, (__int64)a2, a3, (__int64)a4);
    *(_QWORD *)(v11 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v11 + 40) = 0;
    *(_QWORD *)(v11 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v11 + 56) = 0;
    *(_QWORD *)(v11 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v11 + 72) = 0;
    sub_330970(v11, a3);
    *(_BYTE *)a1 = 4;
    *(_QWORD *)(a1 + 8) = v11;
    *(_DWORD *)v11 = 2;
    if ( a4 )
      sub_125180((unsigned __int8 *)(v11 + 32), a4);
    sub_125180((unsigned __int8 *)(v11 + 48), (unsigned __int8 *)a5);
    *(_DWORD *)(a1 + 4) = a6;
    *(_DWORD *)(v11 + 68) = a6;
  }
  return v20 - __readfsqword(0x28u);
}

