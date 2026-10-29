__int64 __fastcall sub_203500(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v5; // rdi
  int *v6; // rbx
  int *i; // r12
  _QWORD *v8; // rax
  unsigned int v9; // ebx
  _QWORD v11[9]; // [rsp+0h] [rbp-48h] BYREF

  v11[3] = __readfsqword(0x28u);
  v11[0] = 0;
  v11[1] = 0;
  sub_32F770((__int64 *)(a2 + 24), v11, a3);
  sub_1EFA10(
    *(_DWORD **)(*(_QWORD *)(a1 + 56) + 1504LL),
    (__int64 *)(*(_QWORD *)(a1 + 56) + 496LL),
    a3,
    *(_DWORD *)(a3 + 88),
    v11,
    *(_DWORD *)(a2 + 40));
  v5 = *(_QWORD **)(a1 + 56);
  if ( (*(_BYTE *)(v5[187] + 604LL) & 0x10) != 0 )
  {
    sub_1F08B0(v5, 0xFFFFFFFFFFFFFFFFLL, 0x14u);
    sub_106EE0(*(_QWORD *)(a1 + 56), a2, *(_QWORD **)(a1 + 72), *(_QWORD **)(a1 + 80));
    v6 = *(int **)(a1 + 16);
    for ( i = &v6[*(_QWORD *)(a1 + 24)]; i != v6; ++v6 )
    {
      while ( 1 )
      {
        v8 = sub_104DF0((unsigned __int64 *)(**(_QWORD **)(a1 + 72) + 24LL * *v6), a2);
        if ( v8 )
        {
          if ( (v8[6] & 4) == 0 )
            break;
        }
        if ( i == ++v6 )
          goto LABEL_8;
      }
      sub_106EE0(*(_QWORD *)(a1 + 56), (unsigned __int64)v8, *(_QWORD **)(a1 + 72), *(_QWORD **)(a1 + 80));
    }
LABEL_8:
    v9 = 0;
  }
  else
  {
    v9 = -20;
  }
  cleanup_argloc();
  return v9;
}

