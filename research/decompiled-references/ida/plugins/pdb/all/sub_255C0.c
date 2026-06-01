_QWORD *__fastcall sub_255C0(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  __int128 v19; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v18 = 0;
  v19 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(*(_QWORD *)(a2 + 16) + 104LL) + 80LL))(
         *(_QWORD *)(*(_QWORD *)(a2 + 16) + 104LL),
         &v18,
         *(_QWORD *)(a2 + 24));
  v5 = v18;
  v6 = nullptr;
  if ( !v4 )
  {
    v8 = operator new(0x30u);
    *(_DWORD *)(v8 + 8) = 1;
    v6 = (_QWORD *)v8;
    v9 = (_QWORD)v19 == 0;
    v5 = v18;
    *(_QWORD *)v8 = &off_A9F80;
    *(_QWORD *)(v8 + 16) = 0;
    *(_DWORD *)(v8 + 40) = -1;
    *(_OWORD *)(v8 + 24) = 0;
    if ( !v9 )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        v16 = v12 + 1;
        if ( v11 < v12 + 1 )
        {
          v17 = qvector_reserve(v6 + 2, v10, v16, 16);
          v6[2] = v17;
          v10 = v17;
          v12 = v6[3];
          v16 = v12 + 1;
        }
        v6[3] = v16;
        v14 = 16 * v12 + v10;
        *(_QWORD *)v14 = *(_QWORD *)(a2 + 16);
        v5 = v18;
        v15 = *(_DWORD *)(v18 + 4 * v13++);
        *(_DWORD *)(v14 + 8) = v15;
        if ( v13 >= (unsigned __int64)v19 )
          break;
        v12 = v6[3];
        v11 = v6[4];
        v10 = v6[2];
      }
    }
  }
  *a1 = v6;
  if ( v5 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v5);
  }
  return a1;
}

