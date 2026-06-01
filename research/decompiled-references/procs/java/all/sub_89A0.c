__int64 __fastcall sub_89A0(__int64 a1, int a2)
{
  char v3[32]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v4[88]; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v5; // [rsp+78h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v4[0] = 0;
  if ( a2 >= 0 )
  {
    v3[0] = 0;
    if ( a2 )
      qsnprintf(v3, 32, byte_226E3, (unsigned int)a2);
    qsnprintf(v4, 80, " use%s locals", v3);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
    return sub_88B0(a1, 4, (__int64)&unk_226F9, v4);
  else
    return sub_88B0(a1, 4, (__int64)&unk_2270C, &unk_22706, *(_QWORD *)(*(_QWORD *)(a1 + 632) + 48LL), v4);
}
