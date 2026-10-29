time_t __fastcall sub_177980(__int64 a1, __int64 (__fastcall ***a2)(_QWORD), unsigned __int8 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rdx
  int v7; // eax
  void (*v8)(void); // rax
  time_t result; // rax
  const __m128i *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // zf

  *(_DWORD *)a1 = 289621065;
  *(_QWORD *)(a1 + 8) = sub_186950();
  v4 = sub_464C0();
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = a2;
  *(_WORD *)(a1 + 144) = a3;
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  if ( !a3 )
  {
    v5 = qword_242890;
    sub_19A520(qword_242890);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_DWORD *)(v6 + 120) + 1;
    *(_DWORD *)(v6 + 120) = v7;
    if ( v7 == 1 )
    {
      v8 = (void (*)(void))qword_241EE0[2];
      if ( v8 )
        v8();
    }
    *(_BYTE *)(a1 + 145) = 1;
    sub_19A570(v5);
  }
  if ( (unsigned __int8)sub_19A430() )
  {
    if ( *(_BYTE *)(a1 + 144) )
    {
      result = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(result + 112) = -1;
    }
    else
    {
      result = time(nullptr);
      v13 = *(_BYTE *)(a1 + 144) == 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = result;
      if ( v13 )
        return interr_exc_t___vtable_at_1764016(
                 0x19u,
                 a2,
                 (const __m128i *)&interr_exc_t___vtable_at_1764016,
                 v10,
                 v11,
                 v12);
    }
  }
  else
  {
    result = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 144) = 1;
    *(_QWORD *)(result + 112) = -1;
  }
  return result;
}
