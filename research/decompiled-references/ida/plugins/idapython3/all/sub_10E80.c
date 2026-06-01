__int64 __fastcall sub_10E80(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = (*(__int64 (**)(void))(qword_24798 + 536))();
  get_idcv_attr();
  set_interruptible_state(0, a1);
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 984))(0);
  set_interruptible_state(1, a1);
  free_idcv();
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v1);
  return 0;
}

