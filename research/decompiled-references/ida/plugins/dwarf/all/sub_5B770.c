__int64 __fastcall sub_5B770(__int64 a1)
{
  __int64 v1; // rbp
  _DWORD *v2; // rbx
  unsigned int v3; // ebp
  void (__fastcall *v5)(_QWORD *); // rdx
  void (__fastcall *v6)(_QWORD *); // rax
  _QWORD **v7; // r12
  __int64 v8; // rdi
  __int64 (__fastcall **v10)(); // [rsp+10h] [rbp-38h] BYREF
  int v11; // [rsp+18h] [rbp-30h]
  __int64 v12; // [rsp+20h] [rbp-28h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v1 = a1 + 8;
  v2 = *(_DWORD **)(sub_87DA0(a1 + 8) + 216);
  if ( v2 )
    ++v2[2];
  if ( (unsigned int)(v2[31] - 4) > 1 || (v11 = 0, v12 = 0, v10 = off_C8590, (unsigned int)sub_A1190(v1, &v10, 1)) )
    v3 = sub_97630(v1, 60);
  else
    v3 = 1;
  if ( v2 )
  {
    if ( v2[2]-- == 1 )
    {
      v5 = **(void (__fastcall ***)(_QWORD *))v2;
      if ( v5 == sub_15E30 )
      {
        v6 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v2 + 16LL);
        if ( v6 == sub_15D70 )
        {
          v7 = *((_QWORD ***)v2 + 16);
          *(_QWORD *)v2 = &off_C71D8;
          if ( v7 )
          {
            sub_546C0(v7[2]);
            operator delete(v7, 0x30u);
          }
          sub_54400(*((_QWORD **)v2 + 19));
          v8 = *((_QWORD *)v2 + 12);
          if ( v8 )
          {
            *((_QWORD *)v2 + 13) = 0;
            qfree(v8);
          }
          operator delete(v2, 0xC0u);
        }
        else
        {
          v6(v2);
        }
      }
      else
      {
        v5(v2);
      }
    }
  }
  return v3;
}

