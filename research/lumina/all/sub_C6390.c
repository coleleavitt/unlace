__int64 __fastcall sub_C6390(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // r13
  signed __int64 v6; // r14
  unsigned int v7; // eax
  void *v9; // rax
  _QWORD v10[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  v10[1] = __readfsqword(0x28u);
  if ( *(_QWORD *)v4 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 21) - 1) > 2u )
    {
      v5 = *(_QWORD *)(a1 + 200);
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 48LL))(v4, v10);
      if ( !v3 )
      {
        v6 = (int)v5 * (unsigned __int64)a2;
        if ( v10[0] != v6 )
        {
          if ( v10[0] <= v6 )
          {
            if ( (int)v5 + v10[0] > v6 )
              goto LABEL_10;
            v9 = memset(*(void **)(a1 + 280), 0, (int)v5);
            v7 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD, signed __int64))(**(_QWORD **)(a1 + 72) + 24LL))(
                   *(_QWORD *)(a1 + 72),
                   v9,
                   (unsigned int)v5,
                   v6 - (int)v5);
          }
          else
          {
            v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(a1 + 72) + 32LL))(
                   *(_QWORD *)(a1 + 72),
                   (int)v5 * (unsigned __int64)a2);
          }
          if ( v7 )
            return v7;
LABEL_10:
          *(_DWORD *)(a1 + 40) = a2;
        }
      }
    }
  }
  return v3;
}
