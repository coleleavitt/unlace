unsigned __int64 __fastcall sub_EF30(__int64 a1, double a2)
{
  _QWORD *v3; // rax
  void *v4; // rdx
  void *v6; // rbp
  size_t v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  size_t v10; // r14
  size_t v11; // r15
  void *v12; // rdi
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+0h] [rbp-1058h] BYREF
  _BYTE v15[4104]; // [rsp+10h] [rbp-1048h] BYREF
  unsigned __int64 v16; // [rsp+1018h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  qstrncpy(v15, "sh3.cfg");
  v14[0] = off_142B8;
  v14[1] = a1 + 120;
  if ( (unsigned __int8)choose_ioport_device2(a1 + 128, v15, v14) )
  {
    if ( *(_QWORD *)(a1 + 136) )
    {
      v6 = *(void **)(a1 + 128);
      if ( !v6 )
        return v16 - __readfsqword(0x28u);
      v7 = strlen(*(const char **)(a1 + 128));
      v10 = v7;
      if ( v7 )
      {
        v11 = v7 + 1;
        v12 = v6;
        if ( *(_QWORD *)(a1 + 144) < v7 + 1 )
        {
          v13 = qvector_reserve(a1 + 128, v6, v7 + 1, 1, v8, v9);
          *(_QWORD *)(a1 + 128) = v13;
          v12 = (void *)v13;
        }
        *(_QWORD *)(a1 + 136) = v11;
        memmove(v12, v6, v10);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + v10) = 0;
        v3 = *(_QWORD **)(a1 + 208);
        if ( *(_QWORD *)(a1 + 136) )
          v4 = *(void **)(a1 + 128);
        else
          v4 = &unk_11E50;
        goto LABEL_5;
      }
LABEL_4:
      v3 = *(_QWORD **)(a1 + 208);
      v4 = &unk_11E50;
      *(_QWORD *)(a1 + 136) = 0;
LABEL_5:
      netnode_supset(*v3, -1, v4, 0, 83);
      sub_E0C0(a1 + 120, 5, a2);
      return v16 - __readfsqword(0x28u);
    }
    if ( &unk_11E50 )
      goto LABEL_4;
  }
  return v16 - __readfsqword(0x28u);
}
