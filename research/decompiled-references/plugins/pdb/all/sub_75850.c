unsigned __int64 __fastcall sub_75850(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *i; // r12
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v6; // [rsp+8h] [rbp-40h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v1 = *(_QWORD **)a1;
  v8 = __readfsqword(0x28u);
  for ( i = *(_QWORD **)(a1 + 8); i != v1; ++v1 )
  {
    if ( *(_DWORD *)(*v1 + 56LL) != -1
      && !(*(unsigned int (__fastcall **)(_QWORD, unsigned __int64 *))(*(_QWORD *)*v1 + 216LL))(*v1, &v6) )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v1 + 112LL))(*v1, &v7) )
      {
        v7 = 1;
        v3 = 1;
      }
      else
      {
        v3 = v7;
      }
      v4 = sub_74380(*(__int64 **)(a1 + 848), v6, v6 + v3, *(_DWORD *)(*v1 + 16LL));
      *(_QWORD *)(a1 + 848) = v4;
      *(_BYTE *)(v4 + 64) = 0;
    }
  }
  return v8 - __readfsqword(0x28u);
}
