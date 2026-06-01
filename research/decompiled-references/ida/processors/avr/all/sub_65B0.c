__int64 __fastcall sub_65B0(__int64 a1)
{
  __int64 (__fastcall *v1)(_QWORD *, char); // rax
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rsi
  int v7; // ebp
  __int64 v8; // rax
  _QWORD v9[135]; // [rsp+0h] [rbp-438h] BYREF

  v9[129] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 721) & 0xC0) == 0 && netnode_altval() )
  {
    btoa64();
    v7 = *(_DWORD *)(a1 + 144) & 0x1890;
    *(_DWORD *)(a1 + 144) &= 0xFFFFE76F;
    sub_5E40(a1, 0xFFFF, (__int64)&unk_B359, *(_QWORD *)(*(_QWORD *)(a1 + 632) + 32LL), v9);
    *(_DWORD *)(a1 + 144) |= v7;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  if ( *(_BYTE *)(a1 + 305) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v1 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v1 != sub_5D10 )
    {
      v1((_QWORD *)a1, 32);
      goto LABEL_7;
    }
    v2 = *(_QWORD *)(a1 + 32);
    if ( v2 )
    {
      v3 = v2 + 1;
      v4 = *(_QWORD *)(a1 + 32);
      v5 = *(_QWORD *)(a1 + 24);
      --v2;
      if ( *(_QWORD *)(a1 + 40) >= v3 )
      {
LABEL_6:
        *(_QWORD *)(a1 + 32) = v3;
        *(_BYTE *)(v5 + v2) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v4) = 0;
LABEL_7:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
        goto LABEL_8;
      }
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 24);
      v4 = 1;
      v3 = 2;
      if ( *(_QWORD *)(a1 + 40) >= 2u )
        goto LABEL_6;
    }
    v8 = qvector_reserve();
    *(_QWORD *)(a1 + 24) = v8;
    v5 = v8;
    goto LABEL_6;
  }
LABEL_8:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

