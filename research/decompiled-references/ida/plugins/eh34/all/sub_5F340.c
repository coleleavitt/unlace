__int64 __fastcall sub_5F340(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // rax
  __int64 v4; // r13
  void (__fastcall *hexdsp)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v6; // rbp
  void (__fastcall *v7)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64, __int64, _QWORD); // r8
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 189) = 1;
  v2 = *(_DWORD *)(a2 + 64);
  if ( v2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 528) + 8LL * (unsigned int)(v2 - 1));
    if ( *(_DWORD *)(v3 + 76) == 6 )
    {
      return v15 - __readfsqword(0x28u);
    }
    else
    {
      if ( (*(_BYTE *)(v3 + 24) & 2) != 0 )
        v4 = *(_QWORD *)(a2 + 40);
      else
        v4 = *(_QWORD *)(v3 + 32);
      hexdsp = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(a1, (const char *)a2);
      hexdsp(418, &v14, a2, v4);
      v6 = v14;
      if ( v14 == -1 )
        v6 = v4;
      v7 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(418, (const char *)&v14);
      v7(417, &v14, a2, v6);
      v8 = v14;
      v9 = sub_6DCB0(a2, *(unsigned int *)(a2 + 64));
      v10 = sub_6DF40(v8, "__eh34_extern_separator");
      v11 = sub_6DD90(1);
      *(_BYTE *)(v10 + 64) = 8;
      *(_QWORD *)(v10 + 72) = v11;
      *(_DWORD *)(v10 + 68) = 0;
      v12 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))get_hexdsp(1, "__eh34_extern_separator");
      return v12(364, v9, v10, 0);
    }
  }
  else
  {
    sub_5F190();
    return sub_5F4A0();
  }
}

