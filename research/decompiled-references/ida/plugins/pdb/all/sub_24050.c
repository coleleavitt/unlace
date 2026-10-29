unsigned __int64 __fastcall sub_24050(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD v5[5]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v5[2] = a1;
  v3 = *(_QWORD *)(a1 + 320);
  v5[4] = a3;
  v5[3] = a2;
  v5[1] = a2;
  v5[0] = off_A9E68;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)v3 + 16LL))(v3, a2, 0, v5);
  return v6 - __readfsqword(0x28u);
}

