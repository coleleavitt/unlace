__int64 __fastcall sub_72A0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 ioport_bit; // r12
  __int64 v5; // rax
  __int64 v7; // rbp
  size_t v8; // r15
  __int64 v9; // r14
  size_t v10; // r8
  _BYTE *v11; // rsi
  size_t v12; // [rsp+8h] [rbp-60h]
  _BYTE *v13; // [rsp+10h] [rbp-58h]
  __int64 v14; // [rsp+18h] [rbp-50h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 32))(a2, 46);
  ioport_bit = find_ioport_bit();
  v5 = *a2;
  if ( !ioport_bit || *(_QWORD *)(ioport_bit + 8) <= 1u || *(_BYTE *)(a3 + 1) != 2 )
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(v5 + 112))(a2, *(_QWORD *)(a3 + 24), 10);
  (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(v5 + 56))(a2, *(_QWORD *)ioport_bit, 34);
  if ( *(_QWORD *)(ioport_bit + 32) > 1u && (get_flags_ex() & 0x800) == 0 )
  {
    v14 = 0;
    v13 = nullptr;
    if ( get_cmt() > 0 )
    {
      v13 = (_BYTE *)qvector_reserve();
      v14 = 2;
      v13[1] = 0;
      *v13 = 47;
    }
    v7 = *(_QWORD *)(ioport_bit + 32);
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v7 != 1 )
      {
        v9 = v14;
        v10 = v7 - 1;
        if ( v14 )
        {
          v9 = v14 - 1;
          v10 = v8 + v14 - 1;
          v7 += v14 - 1;
        }
        v11 = v13;
        if ( v7 )
        {
          v12 = v10;
          v13 = (_BYTE *)qvector_reserve();
          v10 = v12;
          v11 = v13;
        }
        v11[v10] = 0;
        memcpy(&v13[v9], *(const void **)(ioport_bit + 24), v8);
      }
    }
    set_cmt();
    if ( v13 )
      qfree();
  }
  return v15 - __readfsqword(0x28u);
}

