unsigned __int64 __fastcall sub_A870(__int64 a1, int a2, __m128 a3, double a4)
{
  __int64 *v5; // rbp
  int v6; // r13d
  void *v8; // r14
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // rdx
  void *v12; // rdi
  __int64 v13; // rax
  size_t v14; // [rsp+0h] [rbp-68h]
  int v15; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 (__fastcall **v16)(); // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v15 = a2;
  v18 = __readfsqword(0x28u);
  v5 = (__int64 *)(a1 + 120);
  v16 = off_116E8;
  v17 = a1 + 120;
  if ( (unsigned __int8)choose_ioport_device2() )
  {
    if ( !*(_QWORD *)(a1 + 136) || strcmp(*(const char **)(a1 + 128), "NONE") )
      netnode_supset();
    if ( (unsigned __int8)sub_9B80(7, &v15) )
    {
      v6 = v15;
      if ( *(_QWORD *)(a1 + 136) )
      {
        v8 = *(void **)(a1 + 128);
        if ( !v8 )
        {
LABEL_9:
          if ( (v6 & 1) != 0 )
          {
            if ( *(_QWORD *)(a1 + 264) )
            {
              *(_QWORD *)(a1 + 272) = 0;
              qfree();
              *(_QWORD *)(a1 + 264) = 0;
              *(_QWORD *)(a1 + 280) = 0;
            }
            if ( *(_QWORD *)(a1 + 232) != -1 )
              sub_A2A0((_QWORD *)a1, a3, a4);
          }
          return v18 - __readfsqword(0x28u);
        }
        v9 = strlen(*(const char **)(a1 + 128));
        v10 = v9;
        if ( v9 )
        {
          v11 = v9 + 1;
          v12 = v8;
          if ( *(_QWORD *)(a1 + 144) < v9 + 1 )
          {
            v14 = v9 + 1;
            v13 = qvector_reserve();
            v11 = v14;
            *(_QWORD *)(a1 + 128) = v13;
            v12 = (void *)v13;
          }
          *(_QWORD *)(a1 + 136) = v11;
          memmove(v12, v8, v10);
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + v10) = 0;
          goto LABEL_8;
        }
      }
      else if ( !&unk_D8B0 )
      {
        goto LABEL_9;
      }
      *(_QWORD *)(a1 + 136) = 0;
LABEL_8:
      netnode_supset();
      sub_8E20(v5, v6 & 0xFFFFFFFE);
      goto LABEL_9;
    }
  }
  return v18 - __readfsqword(0x28u);
}

