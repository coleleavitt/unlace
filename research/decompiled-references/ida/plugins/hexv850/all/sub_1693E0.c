__int64 __fastcall sub_1693E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  __int64 v5; // r14
  _DWORD *v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD v10[9]; // [rsp+0h] [rbp-48h] BYREF

  v10[3] = __readfsqword(0x28u);
  if ( **(_DWORD **)(a1 + 56) == 44
    && (v4 = sub_11DDE0(*(_QWORD *)(a2 + 48)), (v5 = v4) != 0)
    && *(_DWORD *)v4 == 4
    && ((v6 = *(_DWORD **)(v4 + 8)) == nullptr || *v6 == 55)
    && (unsigned __int8)sub_11B1C0((char *)(v5 + 32), v10, 0)
    && v10[0] == 1
    && (LOBYTE(v7) = sub_120FA0((unsigned __int8 *)(v5 + 64), *(_QWORD *)(a1 + 56) + 32LL, 0), v2 = v7, (_BYTE)v7) )
  {
    sub_11EE80((__int64)v10, (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 32LL));
    v8 = *(_QWORD *)(a1 + 64);
    v9 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
    if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 64) )
      sub_162F30(v10);
    sub_1631E0(a1, a2, *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8 * v9), 32, (__int64)v10, v5);
    sub_1181E0((__int64)v10);
    sub_62520(*(_QWORD *)(a1 + 64), 1u, (__int64)"RECOGNIZE_SETNZ");
  }
  else
  {
    return 0;
  }
  return v2;
}

