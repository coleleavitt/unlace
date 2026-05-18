__int64 __fastcall sub_C3440(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rdi
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 296);
  if ( v3 )
  {
    if ( *(__int16 *)(v3 + 60) >= 0 )
    {
      LODWORD(v3) = *(_DWORD *)(v3 + 92);
      if ( (_DWORD)v3 )
        goto LABEL_4;
    }
  }
  v5 = *(_QWORD *)(a1 + 72);
  if ( !*(_QWORD *)v5 )
  {
    LODWORD(v3) = 0;
LABEL_6:
    *a2 = v3;
    return 0;
  }
  v6[0] = 0;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 48LL))(v5, v6);
  if ( !(_DWORD)result )
  {
    v3 = (*(_QWORD *)(a1 + 200) + v6[0] - 1LL) / *(_QWORD *)(a1 + 200);
LABEL_4:
    if ( *(_DWORD *)(a1 + 188) < (unsigned int)v3 )
      *(_DWORD *)(a1 + 188) = v3;
    goto LABEL_6;
  }
  return result;
}
