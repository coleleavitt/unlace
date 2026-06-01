__int64 __fastcall sub_38C0(__int64 a1, __int64 a2)
{
  char v2; // dl
  unsigned __int64 (__fastcall *v3)(__int64, __int64 *); // rax
  char v4; // dl
  unsigned __int64 (__fastcall *v5)(__int64, __int64 *); // rax

  *(_BYTE *)(a1 + 904) = 1;
  if ( (int)sub_4750(&off_76C0, a1 + 288, a2, 0) >= 0 )
  {
    sub_3800((__int64 *)(a1 + 824));
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 132) |= 2u;
    v2 = sub_4A80("asm_out_func_header", a1 + 792);
    v3 = nullptr;
    if ( v2 )
      v3 = sub_28A0;
    *(_QWORD *)(a1 + 480) = v3;
    v4 = sub_4A80("asm_out_func_footer", a1 + 792);
    v5 = nullptr;
    if ( v4 )
      v5 = sub_2A10;
    *(_QWORD *)(a1 + 488) = v5;
    *(_QWORD *)(a1 + 160) = a1 + 704;
    *(_QWORD *)(a1 + 528) = 0;
    return 1;
  }
}

