__int64 __fastcall sub_199C0(__int64 a1, __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, __int64, __int64, _QWORD **, _BOOL4); // r13
  __int64 (__fastcall *v4)(_QWORD, __int64, __int64, _QWORD **, _BOOL4); // r14
  _BOOL4 v5; // r12d
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // eax
  unsigned int v11; // edx
  _QWORD *v13; // [rsp+0h] [rbp-58h] BYREF
  __int128 v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v2 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64, _QWORD **, _BOOL4))(a1 + 8);
  v15 = __readfsqword(0x28u);
  v4 = **v2;
  v13 = nullptr;
  v14 = 0;
  v5 = (*((_BYTE *)a2 + 36) & 0x20) != 0;
  v6 = (_QWORD *)qvector_reserve();
  v7 = *a2;
  v13 = v6;
  *(_QWORD *)&v14 = 9;
  *v6 = v7;
  *((_BYTE *)v13 + 8) = 0;
  v8 = *(_QWORD *)(a1 + 16) + *((unsigned int *)a2 + 3);
  v9 = v4(v2, v8, v8 + *((unsigned int *)a2 + 2), &v13, v5);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  v10 = *(_DWORD *)(a1 + 24);
  v11 = *((_DWORD *)a2 + 3);
  if ( !v10 || v11 < v10 )
    *(_DWORD *)(a1 + 24) = v11;
  return v9;
}

